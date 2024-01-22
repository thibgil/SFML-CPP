#include <iostream>
#include "Game.h"

int main()
{
  // Init the game
  Game game;

  // Game Loop
  while (game.running())
  {    
    // Update Loop
    game.update(); 

    // Render Loop
    game.render();    

  }

  // Exit de game
  return 0;
}
