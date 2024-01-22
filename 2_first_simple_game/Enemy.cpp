#include "Enemy.h"

// Private functions

void initShape()
{
  this->shape.setPosition(this->positionX, this->positionY);
  this->shape.setSize(this->size);
  this->shape.setFillColor(this->color);
  this->shape.setOutlineColor(this->outlineColor);
  this->shape.setOutlineThickness(this->outlineThickness);
}

// Constructor / Destructor
Enemy::Enemy(float positionX, float positionY, sf::Vector2f size, sf::Color color, sf::Color outlineColor, float outlineThickness)
{
  this->positionX = positionX;
  this->positionY = positionY;
  this->size = size;
  this->color = color;
  this->outlineColor = outlineColor;
  this->outlineThickness = outlineThickness;
}

Enemy::~Enemy()
{
  delete this;
}




