#include <Game.h>

#if defined(PLATFORM_WEB)
#include <emscripten/emscripten.h>
#endif

//------------------------------------------------------------------------------
// Global Variables Definition
//------------------------------------------------------------------------------
static IGame* pGame;

//------------------------------------------------------------------------------
// Module Functions Declaration
//------------------------------------------------------------------------------
void UpdateDrawFrame();  // Update and Draw one frame

int main() {
  // Initialization
  //----------------------------------------------------------------------------
  Game game("Bullet Train", 800, 450);
  pGame = &game;

#if defined(PLATFORM_WEB)
  emscripten_set_main_loop(UpdateDrawFrame, 0, 1);
#else
  // Main game loop
  while (!WindowShouldClose())  // Detect window close button or ESC key
  {
    UpdateDrawFrame();
  }
#endif

  return 0;
}

//------------------------------------------------------------------------------
// Module Functions Definition
//------------------------------------------------------------------------------
void UpdateDrawFrame() {
  // Update
  pGame->Update();

  // Draw
  pGame->Draw();
}