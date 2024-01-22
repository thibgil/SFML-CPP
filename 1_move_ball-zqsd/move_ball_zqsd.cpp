#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Move the red ball with Z-Q-S-D keys");
    //sf::CircleShape shape(10.f);
    //shape.setFillColor(sf::Color::Red);
    sf::Texture playerTexture;
    sf::Sprite playerSprite;

    if (playerTexture.loadFromFile("Sprites/Biker/Biker_idle.png"))
    {
        playerSprite.setTexture(playerTexture);
        int XIndex = 0;
        int YIndex = 0;

        playerSprite.setTextureRect(sf::IntRect(XIndex * 48, YIndex * 48, 48, 48));
        playerSprite.scale(sf::Vector2f(3, 3));
    } 

    int velocity = 1;
 
    while (window.isOpen())
    {
        sf::Vector2f position = playerSprite.getPosition();

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) { window.close(); }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
        {
            playerSprite.setPosition(position + sf::Vector2f(0, -velocity));
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            playerSprite.setPosition(position + sf::Vector2f(0, velocity));
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            playerSprite.setPosition(position + sf::Vector2f(velocity, 0));
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
        {
            playerSprite.setPosition(position + sf::Vector2f(-velocity, 0));
        } 
        
        window.clear(sf::Color::Black);
        window.draw(playerSprite);
        window.display();
    }

    return 0;
}
