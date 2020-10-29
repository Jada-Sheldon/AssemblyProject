#pragma once

#ifndef SNACK_H	
#define SNACK_H

#include <SFML/Graphics.hpp>

// Not done yet

class Snack {
public:
	Snack(sf::CircleShape snack, float location): _snack(snack){}
	~Snack(){}

	sf::CircleShape get_snack() {
		return _snack;
	}

private:
	sf::CircleShape _snack;
};



#endif