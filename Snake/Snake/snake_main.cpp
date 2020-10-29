#include <SFML/Graphics.hpp>
#include <vector>
#include "Snake.h"
int main()
{

	sf::RenderWindow window(sf::VideoMode(800, 800), "Snake", sf::Style::Close | sf::Style::Titlebar);

	sf::RectangleShape snakeshape(sf::Vector2f(10.f, 10.f));
	snakeshape.setOrigin(sf::Vector2f(5.0f, 5.0f));
	snakeshape.setFillColor(sf::Color::Green);

	Snake snake_head(1.0f, snakeshape);

	float deltaTime = 0.1f;
	sf::Clock clock;

	while (window.isOpen())
	{
		sf::Event evnt;
		while (window.pollEvent(evnt))
		{
			switch (evnt.type)
				case sf::Event::Closed:
					window.close();
					break;
		}



		snake_head.update(deltaTime);

		window.clear();
		window.draw(snake_head.get_snake());
		window.display();
	}

	return 0;
}