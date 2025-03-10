#include <raylib.h>
#include<iostream>
#include "color.h"
#include "game.h"

double lastUpdateTime = 0;
bool EventTriggered(double interval) {
  double currentTime = GetTime();
  if (currentTime - lastUpdateTime >= interval) {
    lastUpdateTime = currentTime;
    return true;
  }
  return false;
}

int main() {
  InitWindow(500, 620, "TETRIS");
  SetTargetFPS(100);

  Font font = LoadFontEx("font/FiraCodeNerdFontPropo-Regular.ttf", 64, 0, 0);

  Game game;

  while (!WindowShouldClose()) {
    game.HandleInput();
    if (EventTriggered(0.2)) game.MoveBlockDown();
    BeginDrawing();
    ClearBackground(darkBlue);
    DrawTextEx(font, "SCORE", {365, 15}, 38, 2, WHITE);
    DrawTextEx(font, "NEXT", {370, 175}, 38, 2, WHITE);
    if (game.gameOver) {
      DrawTextEx(font, "GAME OVER", {310, 450}, 38, 2, WHITE);
    }
    DrawRectangleRounded({320, 55, 170, 60}, 0.3, 6, lightBlue);
    char scoreText[10];
    std::sprintf(scoreText,"%d",game.score);
    Vector2 textSize = MeasureTextEx(font,scoreText,38,2);
    DrawTextEx(font, scoreText, {320 + (170-textSize.x)/2, 65}, 38, 2, WHITE);
    DrawRectangleRounded({320, 215, 170, 180}, 0.3, 6, lightBlue);

    game.Draw();

    EndDrawing();
  }

  CloseWindow();
  return 0;
}