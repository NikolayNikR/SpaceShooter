#include "Player.h"

Player::Player(sf::Vector2f player_size, sf::Vector2f player_position , int init_player_speed, std::string init_texture) {
	player.setSize(player_size);
	player.setPosition(player_position);
	player.setOrigin(player.getSize().x / 2, 0);
	player_speed = init_player_speed;

	texture.loadFromFile(init_texture);
	player.setTexture(&texture);

}

void Player::Update(sf::Time time, sf::RenderWindow& window) {
	float delta_time = time.asSeconds();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		sf::Vector2f currentPos = player.getPosition();
		if (player.getPosition().x < window.getSize().x - player.getSize().x / 2) {
			player.setPosition(sf::Vector2f(currentPos.x + player_speed * delta_time, currentPos.y));
		}

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		sf::Vector2f currentPos = player.getPosition();
		if (player.getPosition().x > 0 + player.getSize().x / 2) {
			player.setPosition(sf::Vector2f(currentPos.x - player_speed * delta_time, currentPos.y));
		}
	}

}

void Player::Draw(sf::RenderWindow &window) {
	window.draw(player);
}
