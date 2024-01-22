#ifndef GAME_H
#define GAME_H

// Includes
#include <iostream>
#include <vector>
#include "Enemy.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>

/*
  This is the wrapper class that handle all the game.
*/

class Game
{
private:
  // Variables

  // Window
  sf::RenderWindow* window;
  sf::VideoMode videoMode;
  sf::Event event;
  
  //Mouse positions
  sf::Vector2i mousePosWindow;

  //Game objects
  std::vector<Enemy> enemies;

  // Private functions
  void initVariables();
  void initWindow();
  void initEnemies();

public:
  // Constructors / Destructors
  Game();
  virtual ~Game();
  
  // Accessors
  const bool running() const;

  // Functions
  void pollEvents();
  void updateMousePositions();
  void update();
  void render();
};
#endif
