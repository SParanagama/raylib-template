#include "Game.h"

Game::Game(const char *gameTitle, int windowWidth, int windowHeight)
    : IGame(gameTitle, windowWidth, windowHeight) {}

void Game::Update() {}

void Game::Draw() {
  BeginDrawing();

  ClearBackground(RAYWHITE);

  DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

  EndDrawing();
}

