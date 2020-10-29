#pragma once

#ifndef SNAKE_H
#define SNAKE_H

#include <SFML/Graphics.hpp>

class Snake{
public: 
	Snake(float speed, sf::RectangleShape snake_head): _speed(speed), _snake_Head(snake_head){}
	Snake(){}
	~Snake(){}

	void update(float deltatime) {
		sf::Vector2f movement(0.0f, 0.0f);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {
			movement.x -= _speed * deltatime;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
			movement.x += _speed * deltatime;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) {
			movement.y -= _speed * deltatime;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
			movement.y += _speed * deltatime;
		}
		_snake_Head.move(movement);
	}

	sf::RectangleShape get_snake() {
		return _snake_Head;
	}

private:
	sf::RectangleShape _snake_Head;
	float _speed;
};

#endif // !SNAKE_H