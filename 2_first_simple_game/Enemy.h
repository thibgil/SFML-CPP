#ifndef GAME_H
#define GAME_H

// Includes
#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>

class Enemy
{
private:
  // Variables
  float positionX;
  float positionY;
  sf::Vector2f size;
  sf::Color color;
  sf::Color outlineColor;
  float outlineThickness;
  sf::RectangleShape shape;

  // Functions
  void initShape();

public:
  Enemy();
  virtual ~Enemy();
}
#endif

