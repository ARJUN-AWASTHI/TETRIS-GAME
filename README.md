# Tetris Game in C++ using Raylib

This is a simple Tetris game implemented in C++ using the Raylib graphics library. The project is inspired by [this tutorial video](https://youtu.be/wVYKG_ch4yM?si=XLD1RMY3G1j5GxzN).

## Features

- Classic Tetris gameplay with block rotation and movement
- Collision detection with the grid
- Line clearing and scoring system
- Smooth rendering using Raylib

## Prerequisites

To run this project, you need to have:

- A C++ compiler (e.g., g++)
- Raylib installed ([Installation Guide](https://github.com/raysan5/raylib/wiki/Working-on-GNU-Linux))

## Installation & Compilation

1. Clone the repository:
   ```sh
   git clone https://github.com/yourusername/tetris-raylib.git
   cd tetris-raylib
   ```
2. Compile the project (assuming Raylib is installed correctly):
   ```sh
   g++ -o tetris main.cpp -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
   ```
3. Run the game:
   ```sh
   ./tetris
   ```

## Controls

- **Left Arrow** - Move block left
- **Right Arrow** - Move block right
- **Down Arrow** - Move block down faster
- **Space** - Rotate block



## Acknowledgments

- Thanks to [Raylib](https://www.raylib.com/) for the graphics library
- Inspired by [this tutorial](https://youtu.be/wVYKG_ch4yM?si=XLD1RMY3G1j5GxzN)

## License

This project is open-source. Feel free to modify and improve it!

