#include <iostream>
#include <SFML/Graphics.hpp>

int main() {
	sf::RenderWindow window(sf::VideoMode(700, 1000), "SpaceShooter");
	sf::Texture texture;
	texture.loadFromFile("C:\\Users\\ingin\\Documents\\С++\\Рычков Николай\\Assets\\SpaceWall.jpg");
	sf::Sprite space;
	space.setTexture(texture);
	

	sf::Clock clock;

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		sf::Time delta_time = clock.restart();



		
		window.clear();
		window.draw(space);
		window.display();
	}
}