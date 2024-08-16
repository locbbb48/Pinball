### [VIE](https://github.com/locbbb48/Pinball/blob/main/README.md)
# Pinball Game
**- Code by Bui Thanh Loc - contact : builoc08042004@gmail.com**

---

- ​​Programming exercise at UET, the game project uses C++ language, SDL2 and Box2D libraries.
- According to the license stated, anyone can view or modify the code of this project.
- The game does not have a complex plot but focuses on classic pinball gameplay. The player controls 2 sticks to keep the ball in play and score points by colliding with the specified targets.
- Game Origin: Pepsi Max Pinball.
- **Instructor**: Dr. Le Duc Trong

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Map.png)

---

## Table of Contents:
1. [How to download the game](#1-how-to-download-the-game)
- [a. Method 1: Does not include code](#a-method-1-does-not-include-code)
- [b. Method 2: Includes code and can compile](#b-method-2-includes-code-and-can-compile)
2. [Starting the game](#2-starting-the-game)
3. [Game components](#3-game-components)
4. [How to play](#4-how-to-play)
- [a. Goal](#a-goal)
- [b. Controls](#b-controls)
- [c. Score and Combo](#c-score-and-combo)
5. [Winning and Losing](#5-Winning-and-Losing)
6. [About the Game Graphics](#About-the-Game-Graphics)
7. [About the Game Source Code](#About-the-Game-Source-Code)
8. [Different Points from the Original Game](#8-Different-Points-from-the-Original-Game)

---

## 1. How to Download the Game

### a. Method 1: Without Code
- Download the latest release from the [Releases](https://github.com/your-repo/releases) section. This file only includes the compiled and ready-to-play game.

### b. Method 2: Including Code and Compilable
- Clone the repository from GitHub:

- Compile the code using a development environment that supports SDL2 and Box2D.

## 2. Start the game
- Open the game by finding the .exe file in the downloaded release file and start the game.

- The player will initially have 3 balls to play in turn. 3 balls correspond to 3 turns.

- Don't waste these balls and try to keep them alive as long as possible.

## 3. Game components
- Ball: Moves freely on the table and reacts to collisions.

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/ball.png)

- Stick: Controlled by the player to keep the ball on the table.

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/flippers.png)

- Target: Objects on the table that the ball can hit to score points.

## 4. How to play
### a. Objectives
- The objective of the game is to score as many points as possible by using the sticks to keep the ball on the table, hitting the ball into the targets and increasing the score.

- There will be surprise targets to increase the score as well as targets that can make it difficult for you to play, always stay alert.

### b. Controls
- Left and Right Keys: Used to control the left and right sticks on the pinball table.

- Space key: Used to shoot the ball out of the starting point.

- R key: Used to restart the game.

- F1: Turn on/off collision processing

- Targets: Collide the ball into targets on the table to score points. Targets can be bumpers, ramps, and targets.

### c. Scores and Combos
- Bumper Points: Each time the ball collides with a bumper, you will receive a certain amount of points.

- Ramp Combo: Navigate the ball through the ramps to get combo points.

- Multiplier: While the top three stars are lit, the points you get will be doubled.

## 5. Win and Lose
- Win: Score the highest possible score and try to keep the ball from falling off the table.

- Lose: The game ends when the ball falls off the table 3 times.

---

## About the game's graphics:
- The game uses simple graphics with bright colors, bringing a nostalgic feeling of classic pinball.

## About the game source code:
- The game's source code is written in C++ with the support of the SDL2 and Box2D libraries.

SDL2: Used to process 2D graphics, sounds, and user events.
Box2D: 2D physics library that simulates realistic physical interactions between objects on the pinball table.
Pinball is a simple and classic game, developed to bring a fun and smooth gaming experience.

---

## 8. Differences from the original game:
```bash
Features | Original Game | My Game
Score display | Score is displayed in the game. | Score is displayed on the title along with the number of lives left.

Appearance of balls | All balls are spawned at the beginning of the game. | A ball is spawned and respawned when the player loses a life.

Tornado | The tornado on the left makes the ball spin and when the ball falls | The tornado only spawns balls at the top of the map when the ball falls into the hole.
into the hole, it will be respawned at the top of the map.
Combo feature | None. | ​​When the top three stars are lit, the score you get will be doubled (x2).
