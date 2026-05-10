#include <iostream>
#include <SFML/Graphics.hpp>

const int PLAYER_SPEED = 130;

int main() {
	sf::RenderWindow window(sf::VideoMode(700, 1000), "SpaceShooter");
	sf::Texture texture;
	texture.loadFromFile("C:\\Users\\ingin\\Documents\\С++\\Рычков Николай\\Assets\\SpaceWall.jpg");
	sf::Sprite space;
	space.setTexture(texture);

	sf::RectangleShape player;
	player.setSize(sf::Vector2f(100, 100));
	player.setPosition(sf::Vector2f(window.getSize().x / 2, 800));
	player.setOrigin(player.getSize().x/2, 0);
	

	sf::Clock clock;

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		sf::Time delta_time = clock.restart();

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
			sf::Vector2f currentPos = player.getPosition();
			if (player.getPosition().x < window.getSize().x - player.getSize().x / 2) {
				player.setPosition(sf::Vector2f(currentPos.x + PLAYER_SPEED * delta_time.asSeconds(),currentPos.y));
			}
			
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
			sf::Vector2f currentPos = player.getPosition();
			if (player.getPosition().x > 0 + player.getSize().x/2) {
				player.setPosition(sf::Vector2f(currentPos.x - PLAYER_SPEED * delta_time.asSeconds(), currentPos.y));
			}
		}



		
		window.clear();
		window.draw(space);
		window.draw(player);
		window.display();
	}
}