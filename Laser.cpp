#include "Laser.h"

Lazer::Lazer(int init_speed, sf::Vector2f position_lazer, sf::Vector2f size_lazer, std::string init_texture) {
	speed = init_speed;
	lazer.setPosition(position_lazer);
	lazer.setSize(size_lazer);
}

void Lazer::Draw(sf::RenderWindow& window) {
	window.draw(lazer);
}

void Lazer::Update(sf::Time time, sf::RenderWindow& window) {
	float delta_time = time.asSeconds();
	sf::Vector2f currentPos = lazer.getPosition();

	lazer.setPosition(sf::Vector2f(currentPos.x, currentPos.y - speed * delta_time));
	
	
	
}
