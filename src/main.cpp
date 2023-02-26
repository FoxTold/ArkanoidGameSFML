#include <SFML/Graphics.hpp>

int main()
{
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
    sf::RenderWindow window(desktop, "Sfml is finaly set up properly !");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        shape.setPosition(sf::Vector2(shape.getPosition().x+1, shape.getPosition().y+1));
        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}