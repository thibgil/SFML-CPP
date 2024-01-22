#include "Game.h"

// Private functions
void Game::initVariables()
{
  this->window = nullptr;
}

void Game::initWindow()
{
  this->videoMode.width = 1920;
  this->videoMode.height = 1080;

  this->window = new sf::RenderWindow(this->videoMode, "First Simple Game", sf::Style::Default | sf::Style::Close);
  
  this->window->setFramerateLimit(144);
}

void Game::initEnemies()
{
  Enemy enemy1 = New Enemy(10.f, 10.f, sf::Vector2f(10.f, 10.f), sf::Color::Red, sf::Color::Green, 1.f);
  Enemy enemy2 = New Enemy(50.f, 20.f, sf::Vector2f(10.f, 10.f), sf::Color::Red, sf::Color::Green, 1.f);
  Enemy enemy3 = New Enemy(10.f, 90.f, sf::Vector2f(10.f, 10.f), sf::Color::Red, sf::Color::Green, 1.f);
  Enemy enemy4 = New Enemy(20.f, 80.f, sf::Vector2f(10.f, 10.f), sf::Color::Red, sf::Color::Green, 1.f);
  this->enemies.insert(this->enemies.end(), enemy1);
  this->enemies.insert(this->enemies.end(), enemy2);
  this->enemies.insert(this->enemies.end(), enemy3);
  this->enemies.insert(this->enemies.end(), enemy4);    
}

// Constructors / Destructors
Game::Game()
{
  this->initVariables();
  this->initWindow();
  this->initEnemies();
}

Game::~Game()
{
  delete this->window;
}

// Accessors
const bool Game::running() const
{
  return this->window->isOpen();
}

// Public functions
void Game::pollEvents()
{
// Event polling
while (this->window->pollEvent(this->event))
  {
  switch (this->event.type)
    {
    case sf::Event::Closed:
      this->window->close();
      break;
    case sf::Event::KeyPressed:
      if(this->event.key.code == sf::Keyboard::Escape)
        this->window->close();
      break;
      }
    }
}

void Game::updateMousePositions()
{
/*
  @ return void

  Updates the mouse positions:
  - Mouse position relative to window (vector2i)
*/

  this->mousePosWindow = sf::Mouse::getPosition(*this->window);
}

void Game::update()
{
  this->pollEvents();
  this->updateMousePositions();
}

void Game::render()
{
/*
  Renders the game objects:
  - clear old frame
  - render objects
  - display frame in window
*/

  this->window->clear();

  //Draw the game objects
  this->window->draw(this->enemy);

  this->window->display();
}

