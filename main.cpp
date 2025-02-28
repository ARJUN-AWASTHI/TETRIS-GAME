#include <raylib.h>
#include <iostream>
#include "grid.h"
#include "blocks.cpp"
int main(){
    Color darkBlue = {44,44,127,255};
    InitWindow(300,600,"TETRIS");
    SetTargetFPS(60);
    Grid grid;
    TBlock block;
    grid.Print(); 
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(darkBlue);
        grid.Draw();
        block.Draw();

        EndDrawing();
    }
    
    CloseWindow();
    return 0; 

}