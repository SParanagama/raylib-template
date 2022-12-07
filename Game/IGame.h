#ifndef RAYLIBGAME_IGAME_H
#define RAYLIBGAME_IGAME_H

#include <raylib.h>

class IGame {

public:

  IGame(const char* gameTitle, int windowWidth, int windowHeight) {
    InitWindow(windowWidth, windowHeight, gameTitle);
    SetTargetFPS(60);
  }

  virtual ~IGame() {
    CloseWindow();
  };

  virtual void Update() = 0;
  virtual void Draw() = 0;
};

#endif // RAYLIBGAME_IGAME_H
