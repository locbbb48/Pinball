	#include "Globals.h"
	#include "Application.h"
	#include "ModuleInput.h"
	#include "ModuleRender.h"
	#include "ModulePhysics.h"
	#include "p2Point.h"
	#include "math.h"

	#ifdef _DEBUG
	#pragma comment( lib, "Box2D/libx86/Debug/Box2D.lib" )
	#else
	#pragma comment( lib, "Box2D/libx86/Release/Box2D.lib" )
	#endif

	ModulePhysics::ModulePhysics(Application* app, bool start_enabled) : Module(app, start_enabled)
	{
		world = NULL;
		mouse_joint = NULL;
		debug = false;
	}

	// Destructor
	ModulePhysics::~ModulePhysics()
	{
	}

	bool ModulePhysics::Start()
	{
		LOG("Creating Physics 2D environment");

		world = new b2World(b2Vec2(GRAVITY_X, -GRAVITY_Y));
		world->SetContactListener(this);

		return true;
	}

	// 
	update_status ModulePhysics::PreUpdate()
	{
		world->Step(1.0f / 60.0f, 6, 2);

		for(b2Contact* c = world->GetContactList(); c; c = c->GetNext())
		{
			if(c->GetFixtureA()->IsSensor() && c->IsTouching())
			{
				PhysBody* pb1 = (PhysBody*)c->GetFixtureA()->GetBody()->GetUserData();
				PhysBody* pb2 = (PhysBody*)c->GetFixtureB()->GetBody()->GetUserData();
				if(pb1 && pb2 && pb1->listener)
					pb1->listener->OnCollision(pb1, pb2);
			}
		}

		return UPDATE_CONTINUE;
	}

	PhysBody* ModulePhysics::CreateCircle(int x, int y, int radius, b2BodyType bodyType, float restitution, float vx, float vy)
	{
		b2BodyDef body;
		body.type = bodyType;
		body.position.Set(PIXEL_TO_METERS(x), PIXEL_TO_METERS(y));
		body.linearVelocity.Set(vx,vy);

		b2Body* b = world->CreateBody(&body);

		b2CircleShape shape;
		shape.m_radius = PIXEL_TO_METERS(radius);
		b2FixtureDef fixture;
		fixture.shape = &shape;
		fixture.density = 1.0f;
		fixture.restitution = restitution;

		b->CreateFixture(&fixture);

		PhysBody* pbody = new PhysBody();
		pbody->body = b;
		b->SetUserData(pbody);
		pbody->width = pbody->height = radius;

		return pbody;
	}

	PhysBody* ModulePhysics::CreateRectangle(int x, int y, int width, int height, float angle, b2BodyType bodyType, float restitution)

	{
		b2BodyDef body;
		body.type = bodyType;
		body.position.Set(PIXEL_TO_METERS(x), PIXEL_TO_METERS(y));

		b2Body* b = world->CreateBody(&body);
		b->SetTransform(body.position, angle);

		b2PolygonShape box;
		box.SetAsBox(PIXEL_TO_METERS(width) * 0.5f, PIXEL_TO_METERS(height) * 0.5f);

		b2FixtureDef fixture;
		fixture.shape = &box;
		fixture.density = 1.0f;
		fixture.restitution = restitution;

		b->CreateFixture(&fixture);

		PhysBody* pbody = new PhysBody();
		pbody->body = b;
		b->SetUserData(pbody);
		pbody->width = width * 0.5f;
		pbody->height = height * 0.5f;

		return pbody;
	}

	PhysBody* ModulePhysics::CreateRectangleSensor(int x, int y, int width, int height, float angle)
	{
		b2BodyDef body;
		body.type = b2_staticBody;
		body.position.Set(PIXEL_TO_METERS(x), PIXEL_TO_METERS(y));

		b2Body* b = world->CreateBody(&body);
		b->SetTransform(body.position, DEGTORAD * angle);

		b2PolygonShape box;
		box.SetAsBox(PIXEL_TO_METERS(width) * 0.5f, PIXEL_TO_METERS(height) * 0.5f);

		b2FixtureDef fixture;
		fixture.shape = &box;
		fixture.density = 1.0f;
		fixture.isSensor = true;

		b->CreateFixture(&fixture);

		PhysBody* pbody = new PhysBody();
		pbody->body = b;
		b->SetUserData(pbody);
		pbody->width = width;
		pbody->height = height;

		return pbody;
	}

	PhysBody* ModulePhysics::CreateChain(int x, int y, int* points, int size, float restitution)
	{
		b2BodyDef body;
		body.type = b2_staticBody;
		body.position.Set(PIXEL_TO_METERS(x), PIXEL_TO_METERS(y));

		b2Body* b = world->CreateBody(&body);

		b2ChainShape shape;
		b2Vec2* p = new b2Vec2[size / 2];

		for(uint i = 0; i < size / 2; ++i)
		{
			p[i].x = PIXEL_TO_METERS(points[i * 2 + 0]);
			p[i].y = PIXEL_TO_METERS(points[i * 2 + 1]);
		}

		shape.CreateLoop(p, size / 2);

		b2FixtureDef fixture;
		fixture.shape = &shape;
		fixture.restitution = restitution;

		b->CreateFixture(&fixture);

		delete p;

		PhysBody* pbody = new PhysBody();
		pbody->body = b;
		b->SetUserData(pbody);
		pbody->width = pbody->height = 0;

		return pbody;
	}

	// 
	update_status ModulePhysics::PostUpdate()
	{
		if(App->input->GetKey(SDL_SCANCODE_F1) == KEY_DOWN)
			debug = !debug;

		if(!debug)
			return UPDATE_CONTINUE;

		b2Body* body_clicked = nullptr;

		b2Vec2 mouse_pos;
		mouse_pos.x = PIXEL_TO_METERS(App->input->GetMouseX());
		mouse_pos.y = PIXEL_TO_METERS(App->input->GetMouseY());

		// Bonus code: this will iterate all objects in the world and draw the circles
		// You need to provide your own macro to translate meters to pixels
		for(b2Body* b = world->GetBodyList(); b; b = b->GetNext())
		{
			for(b2Fixture* f = b->GetFixtureList(); f; f = f->GetNext())
			{
				switch(f->GetType())
				{
					// Draw circles ------------------------------------------------
					case b2Shape::e_circle:
					{
						b2CircleShape* shape = (b2CircleShape*)f->GetShape();
						b2Vec2 pos = f->GetBody()->GetPosition();
						App->renderer->DrawCircle(METERS_TO_PIXELS(pos.x), METERS_TO_PIXELS(pos.y), METERS_TO_PIXELS(shape->m_radius), 255, 255, 255);
					}
					break;

					// Draw polygons ------------------------------------------------
					case b2Shape::e_polygon:
					{
						b2PolygonShape* polygonShape = (b2PolygonShape*)f->GetShape();
						int32 count = polygonShape->GetVertexCount();
						b2Vec2 prev, v;

						for(int32 i = 0; i < count; ++i)
						{
							v = b->GetWorldPoint(polygonShape->GetVertex(i));
							if(i > 0)
								App->renderer->DrawLine(METERS_TO_PIXELS(prev.x), METERS_TO_PIXELS(prev.y), METERS_TO_PIXELS(v.x), METERS_TO_PIXELS(v.y), 255, 100, 100);

							prev = v;
						}

						v = b->GetWorldPoint(polygonShape->GetVertex(0));
						App->renderer->DrawLine(METERS_TO_PIXELS(prev.x), METERS_TO_PIXELS(prev.y), METERS_TO_PIXELS(v.x), METERS_TO_PIXELS(v.y), 255, 100, 100);
					}
					break;

					// Draw chains contour -------------------------------------------
					case b2Shape::e_chain:
					{
						b2ChainShape* shape = (b2ChainShape*)f->GetShape();
						b2Vec2 prev, v;

						for(int32 i = 0; i < shape->m_count; ++i)
						{
							v = b->GetWorldPoint(shape->m_vertices[i]);
							if(i > 0)
								App->renderer->DrawLine(METERS_TO_PIXELS(prev.x), METERS_TO_PIXELS(prev.y), METERS_TO_PIXELS(v.x), METERS_TO_PIXELS(v.y), 100, 255, 100);
							prev = v;
						}

						v = b->GetWorldPoint(shape->m_vertices[0]);
						App->renderer->DrawLine(METERS_TO_PIXELS(prev.x), METERS_TO_PIXELS(prev.y), METERS_TO_PIXELS(v.x), METERS_TO_PIXELS(v.y), 100, 255, 100);
					}
					break;

					// Draw a single segment(edge) ----------------------------------
					case b2Shape::e_edge:
					{
						b2EdgeShape* shape = (b2EdgeShape*)f->GetShape();
						b2Vec2 v1, v2;

						v1 = b->GetWorldPoint(shape->m_vertex0);
						v1 = b->GetWorldPoint(shape->m_vertex1);
						App->renderer->DrawLine(METERS_TO_PIXELS(v1.x), METERS_TO_PIXELS(v1.y), METERS_TO_PIXELS(v2.x), METERS_TO_PIXELS(v2.y), 100, 100, 255);
					}
					break;
				}

				
			}
		}

	






		return UPDATE_CONTINUE;
	}


	// Called before quitting
	bool ModulePhysics::CleanUp()
	{
		LOG("Destroying physics world");

		// Delete the whole physics world!
		delete world;

		return true;
	}

	void PhysBody::GetPosition(int& x, int &y) const
	{
		b2Vec2 pos = body->GetPosition();
		x = METERS_TO_PIXELS(pos.x) - (width);
		y = METERS_TO_PIXELS(pos.y) - (height);
	}

	float PhysBody::GetRotation() const
	{
		return RADTODEG * body->GetAngle();
	}

	bool PhysBody::Contains(int x, int y) const
	{
		b2Vec2 p(PIXEL_TO_METERS(x), PIXEL_TO_METERS(y));

		const b2Fixture* fixture = body->GetFixtureList();

		while(fixture != NULL)
		{
			if(fixture->GetShape()->TestPoint(body->GetTransform(), p) == true)
				return true;
			fixture = fixture->GetNext();
		}

		return false;
	}

	int PhysBody::RayCast(int x1, int y1, int x2, int y2, float& normal_x, float& normal_y) const
	{
		int ret = -1;

		b2RayCastInput input;
		b2RayCastOutput output;

		input.p1.Set(PIXEL_TO_METERS(x1), PIXEL_TO_METERS(y1));
		input.p2.Set(PIXEL_TO_METERS(x2), PIXEL_TO_METERS(y2));
		input.maxFraction = 1.0f;

		const b2Fixture* fixture = body->GetFixtureList();

		while(fixture != NULL)
		{
			if(fixture->GetShape()->RayCast(&output, input, body->GetTransform(), 0) == true)
			{
				// do we want the normal ?

				float fx = x2 - x1;
				float fy = y2 - y1;
				float dist = sqrtf((fx*fx) + (fy*fy));

				normal_x = output.normal.x;
				normal_y = output.normal.y;

				return output.fraction * dist;
			}
			fixture = fixture->GetNext();
		}

		return ret;
	}

	void ModulePhysics::BeginContact(b2Contact* contact)
	{
		PhysBody* physA = (PhysBody*)contact->GetFixtureA()->GetBody()->GetUserData();
		PhysBody* physB = (PhysBody*)contact->GetFixtureB()->GetBody()->GetUserData();

		if(physA && physA->listener != NULL)
			physA->listener->OnCollision(physA, physB);

		if(physB && physB->listener != NULL)
			physB->listener->OnCollision(physB, physA);
	}