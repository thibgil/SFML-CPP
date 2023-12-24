#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "Move the red ball with Z-Q-S-D keys");
    sf::CircleShape shape(10.f);
    shape.setFillColor(sf::Color::Red);

    int velocity = 1;
 
    while (window.isOpen())
    {
        sf::Vector2f position = shape.getPosition();

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) { window.close(); }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
        {
            shape.setPosition(position + sf::Vector2f(0, -velocity));
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            shape.setPosition(position + sf::Vector2f(0, velocity));
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            shape.setPosition(position + sf::Vector2f(velocity, 0));
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
        {
            shape.setPosition(position + sf::Vector2f(-velocity, 0));
        } 
        
        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}