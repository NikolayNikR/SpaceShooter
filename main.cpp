#include <iostream>
#include <SFML/Graphics.hpp>
#include "Player.h"

const int PLAYER_SPEED = 130;

int main() {
	sf::RenderWindow window(sf::VideoMode(700, 1000), "SpaceShooter");
	sf::Texture texture;
	texture.loadFromFile("C:\\Users\\ingin\\Documents\\С++\\Рычков Николай\\Assets\\SpaceWall.jpg");
	sf::Sprite space;
	space.setTexture(texture);
	Player player(sf::Vector2f(200, 200), sf::Vector2f(window.getSize().x / 2, 800), PLAYER_SPEED, "C:\\Users\\ingin\\Documents\\С++\\Рычков Николай\\Assets\\SpaceShip.png");

	

	sf::Clock clock;

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		sf::Time delta_time = clock.restart();





		player.Update(delta_time, window);
		window.clear();
		
		window.draw(space);

		player.Draw(window);
		window.display();
	}
}