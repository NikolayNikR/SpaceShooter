#pragma once
#include <SFML/Graphics.hpp>

class Player
{
public:
	Player(sf::Vector2f player_size, sf::Vector2f player_position, int init_player_speed, std::string init_texture);

	void Update(sf::Time time, sf::RenderWindow& window );

	void Draw(sf::RenderWindow& window);
private:
	sf::RectangleShape player;
	int player_speed;
	sf::Texture texture;
};

