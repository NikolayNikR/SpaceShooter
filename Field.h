#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "Player.h"
#include "Laser.h"

class Field
{
public:
	Field();

	void Draw();

	void Update();

private:
	Player player;
	std::vector<Lazer> lazer;
};

