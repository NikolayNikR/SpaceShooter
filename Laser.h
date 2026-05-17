#pragma once
#include <SFML/Graphics.hpp>

class Lazer
{
public:
	Lazer(int init_speed, sf::Vector2f position_lazer, sf::Vector2f size_lazer, std::string init_texture);

	void Draw(sf::RenderWindow& window);

	void Update(sf::Time time, sf::RenderWindow& window);

private:
	int speed;
	sf::Texture texture;
	sf::RectangleShape lazer;
};

