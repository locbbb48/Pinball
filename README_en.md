### [VIE](https://github.com/locbbb48/Pinball/blob/main/README.md)
# Pinball Game
**- Code by Bui Thanh Loc - contact : builoc08042004@gmail.com**

---

- ​​Programming exercise at UET, the game project uses C++ language, SDL2 and Box2D libraries.
- According to the license stated, anyone can view or modify the code of this project.
- The game does not have a complex plot but focuses on classic pinball gameplay. The player controls 2 sticks to keep the ball in play and scores by colliding with designated targets.
- Game Origin: Pepsi Max Pinball.
- **Instructor**: Dr. Le Duc Trong

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Map.png)

---

## Table of Contents:
1. [How to download the game](#1-how-to-download-the-game)
- [a. Method 1: Does not include code](#a-method-1-does-not-include-code)
- [b. Method 2: Includes code and can be compiled](#b-method-2-includes-code-and-can-be-compiled)
2. [Starting the game](#2-starting-the-game)
3. [Game components](#3-game-components)
4. [How to play](#4-how-to-play)
- [a. Goal](#a-goal)
- [b. Controls](#b-controls)
- [c. [Score and Combo](#c-score-and-combo)
5. [Winning and Losing](#5-Winning-and-Losing)
6. [About the Game Graphics](#6-About-the-Game-Graphics)
7. [About the Game Source Code](#7-About-the-Game-Source-Code)
8. [Different Points from the Original Game](#8-Different-Points-from-the-Original-Game)
9. [Self-Evaluation](#9-Self-Evaluation-After-Completing-the-Project)

---

## 1. How to Download the Game

### a. Method 1: Without Code
-Download the latest release from the [Releases](https://github.com/locbbb48/Pinball/releases/tag/Public) section. This file only includes the compiled and ready-to-play game.

- Download PinBall.Release.zip
- Unzip and find the Pinball.exe file in the extracted file.
- Click on the Pinball.exe file and play the game.

### b. Method 2: Include code and can compile
- Clone repository from GitHub:

- Compile the code using a development environment that supports SDL2 and Box2D.

## 2. Start the game
- Open the game by finding the .exe file in the downloaded release file and start the game.

- The player will initially have 5 balls corresponding to 5 turns.

- Don't waste these balls and try to keep them alive as long as possible.

## 3. Game components
- Ball: The main ball of the game. It can be removed from the board and restarted using the launcher.

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/ball.png)

- Flippers: Pedals that help the player keep the ball on the table and control the direction of the ball.

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/flippers.png)

- Launcher: A mechanism to launch the ball from the starting area. Controlled by the down arrow key.

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Launcher.png)

- Auto Kickers: Sensors that help push the ball up when it hits them.

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Auto%20Kicker.png)

- Bumpers: Objects that create collisions and increase the player's score.

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Bumper.png)

- Stars: Objects that the ball can touch to score points.

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/star.png)

- Nuggets: Sensors that the ball can touch to score points, the ball will bounce with a force when touched.

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Nugget.png)

- Tornado: is a special object on the table, helps increase points, has the ability to suck the ball in and bring the ball to an unexpected position.

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/piece_tornado.png)

- Ball Eater: When the ball falls in, the ball will be held for a certain time before being shot out again at an unexpected speed.

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Ball%20Eater.png)

## 4. How to play
### a. Objectives
- The objective of the game is to score as many points as possible by using the sticks to keep the ball in the table, hitting the ball into the targets and increasing the score.

- There will be unexpected targets to increase the score as well as targets that can make it difficult for you to play, always stay alert.

### b. Controls
- Left and Right Keys: Used to control the left and right sticks on the pinball table.

- Space Key: Used to shoot the ball out of the starting point.

- R Key: Used to restart the game.

- F1: Turn on/off the display of collision parts.

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Collision.png)

### c. Scores and Combos
- Bumpers (Bumpers): There are three bumpers (leftBumper, midBumper, rightBumper) on the table. When the ball collides with any bumper, the player gets points:

. 100 points if there is no combo.

. 200 points if there is a combo.

- Nuggets: There are two nugget sensors (right_nugget_sens, left_nugget_sens). When the ball touches a nugget sensor, the player gets points:

. 250 points if there is no combo.

. 500 points if there is a combo.
- Tornado: When the ball touches the tornado sensor, the player gets points:

. 2000 points if there is no combo.

. 4000 points if there is a combo.

- Ball Eater: When the ball touches the ball eater sensor:

. 500 points if there is no combo.

. 1000 points if there is a combo.

- Stars: There are three stars (leftStar, middleStar, rightStar). When the ball touches a star, it will light up.

- Combo: While the top three stars light up, the points you get each time will be doubled.

## 5. Win and Lose
- Win: Score the highest possible score and try to keep the ball from falling off the table.

- Lose: The game ends when the ball falls off the table 5 times.

---

## 6. About the game's graphics:
- The game uses simple graphics with bright colors, bringing a nostalgic feeling of classic pinball.

- The game's graphics and sounds are collected from many different sources, possibly from cutting and pasting from the original game but selectively and adding more to bring the most realistic feeling.

## 7. About the game's source code:
- The game's source code is written in C++ with the support of the SDL2 and Box2D libraries; The game is built on the creation of inherited Modules to manage each part of the game.

- Library:

. SDL2: Used to process 2D graphics, sound, and user events.

. Box2D: is an open source 2D physics library, helping to simulate realistic physical behaviors in the game. Box2D provides tools for handling collisions, gravity, and other forces in a 2D environment.

Box2D provides accurate physics simulation for objects on a pinball table, including collisions between balls and targets, the effects of gravity on balls, and other interactions. The library supports creating a realistic and smooth gaming experience.

- General description of the Modules:

. ModuleWindow: manages the application window, which is the first step for any graphics program. The window needs to be initialized before other tasks such as rendering, input, or displaying images can be performed.

. ModuleRender: manages the rendering of content to the window. ModuleRender is responsible for drawing everything on the screen.

. ModuleInput: manages user inputs, such as the keyboard and mouse. This is important for controlling the character or interacting with other game components.

. ModuleTextures: manages the loading and storage of images, sprites. These textures will be used during rendering, so they need to be present before rendering complex objects.

. ModuleAudio: handles the sound in the game, including background music and sound effects. You need to initialize the sound to create a multimedia experience for the player.

. ModulePhysics: manages the physics laws in the game, necessary for handling collisions, gravity, and other dynamics. This is important if the game has physics elements such as movement or interaction between objects.

. ModuleSceneIntro: manages the first scene of the game. This module uses all previous modules to display the first scene.

. ModulePlayer: uses all previously created components (window, render, input, audio, physics) to control the gameplay.

---

## 8. Differences from the original game:
```bash
Features | Original Game | My Game
Score display | Score is displayed in the game. | Score is displayed on the title along with the remaining lives.

Appearance of balls | All balls are spawned at the beginning of the game. | A ball is spawned and is reborn when the player loses a life.

Tornado | The tornado on the left makes the ball spin and when the ball falls | The tornado only spawns balls at the top of the map when the ball falls into the hole.
into the hole, it will be reborn at the top of the map.

Combo feature | None. | ​​When the top three stars are lit, the score you get will be doubled (x2).

```

---

## 9. Self-assessment after completing the Project:

### Outstanding good points:
- The project uses many outstanding programming techniques, in which many theoretical knowledge learned in the LTNC subject are applied:

. Using Linked List: The project uses a linked list (p2List) to manage modules in the game. This list makes it easy to add, delete, or browse through modules without having to know the size or location of the elements in advance. For example: In Application::AddModule(Module* mod), modules are added to the linked list to manage and call the Init, Start, Update, and CleanUp functions in order.

. Using raw pointers (new and delete) to manage memory for modules in the game. This requires programmers to be careful to avoid errors related to memory management such as memory leaks or deleting objects multiple times. For example: In Application::~Application(), modules are deleted in the reverse order of initialization to ensure all resources are released properly.

- Use some specialized and prominent Design Patterns for game development such as:

. Singleton: A Design Pattern to ensure that there is only one instance of the Application class. This makes it easier to manage the resources and global state of the game. For example, Application is a singleton, and it is created and managed in the main function. There is only one instance of Application throughout the life of the program.

. Module Pattern: The project organizes the code into separate modules, each module is responsible for a specific part of the game such as ModuleRender, ModuleWindow, ModuleInput, ModuleAudio, ModulePlayer, and ModulePhysics. This helps to separate the functions, reduce the dependencies between components, and make maintenance easier.

. Template Method Pattern: The Update methods in the modules are implemented according to the template method pattern. Each module can implement its own PreUpdate, Update, and PostUpdate methods to define its specific behavior, while the order of calling these methods is centrally managed in the Application class.

- Use and follow the rules of OOP: The Pinball game project is built on the foundation of object-oriented programming (OOP), where each main function of the game is encapsulated in different modules. These modules represent classes in C++, each module is responsible for a specific part of the game such as sound, physics processing, graphics, and player control.

. Encapsulation: Each module manages its own state and behavior, without exposing its implementation details to the outside. This makes the source code easy to maintain and avoids conflicts between different parts of the program.

. Inheritance: Some modules can inherit from base classes to share common properties and methods.

.Polymorphism: Used to allow different modules to be handled in the same way through the base class pointer, which is useful for managing the lifecycle of modules and calling common methods such as Init(), Update(), and CleanUp().

- Using Logging: The project uses logging macros to record information about the game's startup, update, and cleanup processes. This is useful for debugging and monitoring game performance.

- Extensibility: The project's architecture is designed to be easily extensible. Modules can be added or modified without much impact on the rest of the game.

- Self-study and work with a new library called Box2D: Using an additional physics library helped me discover many interesting and new things about simulating the physical world with code. The laws of physics such as collision, gravity, and the dynamics of objects are simulated in detail according to real laws. When integrating Box2D into the Pinball game project, it brings many improvements and differences compared to using simple physics systems or no physics system. So this project for me is not simply trying to create a classic pinball game, but also experiencing more of what code can do in recreating and simulating what exists in reality, such as basic physics in this project.

### Some limitations that I myself recognize:

- Simple graphics and sound interface because it is mainly cut and pasted from the original game.

- There are not many differences in gameplay because I am mainly concerned with learning the rules of physics.

- Lack of time to further improve the reward system as well as other rules for the game.

### Lessons learned for myself after the project and Conclusion:

- The importance of memory management: Manual memory management with raw pointers in C++ requires programmers to be extremely careful to avoid errors such as memory leaks or multiple object deletions. This emphasizes the importance of understanding memory management in C++.

- Modularization and reducing dependencies between components: Although there has been a division of functions into modules, attention should still be paid to reducing dependencies between modules to increase the flexibility and scalability of the project. This makes it easy to change or expand parts of the game without affecting the entire system.

- The value of user interface and sound experience in building a system: Graphical and audio interfaces play an important role in creating an engaging experience for players. A simple interface or lack of sound effects can make the game less attractive compared to modern standards. ==> Experience: Invest in user interface (UI/UX) design and sound systems to create a richer experience for players, and consider using new technologies and tools to improve the quality of graphics and sound.

- The need for more complex game systems: Basic game systems, such as simple scoring, may not be enough to maintain player interest over a long period of time. More complex systems such as combos, rewards, and upgrades can make the game more engaging and challenging.
- Deep understanding of physics integration with code: Integrating Box2D helps bring realism and accuracy in simulating physics in games. This can inspire me when I want to design future projects.

==> Conclusion:
"Pinball Game" is not only a great assignment in advanced programming but also an opportunity for me to learn about software project management, source code optimization, and creating a feasible product. The lessons learned from this project will be a solid foundation for future projects, helping to improve programming skills, software design, and problem solving ability in practice. Finally, I would like to thank Mr. Le Duc Trong and Ms. Hoang Thi Ngoc Trang for teaching and helping me in the LTNC subject so that I can complete this project as well as possible and draw valuable lessons for myself in the future.