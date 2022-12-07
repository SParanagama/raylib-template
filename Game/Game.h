#ifndef RAYLIB_TEMPLATE_GAME_H
#define RAYLIB_TEMPLATE_GAME_H

#include <IGame.h>

class Game: public IGame
{
public:
  Game(const char* gameTitle, int windowWidth, int windowHeight);
  void Update() override;
  void Draw() override;
};

#endif // RAYLIB_TEMPLATE_GAME_H
