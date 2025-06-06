#include <iostream>
class Player {
private:
	std::string name;
	int health;
	int score;
public:
	Player(std::string playerName, int playerHealth, int playerScore)
		: name(playerName), health(playerHealth), score(playerScore) {}
	void takeDamage(int amount) {
		health -= amount;
		if (health < 0) health = 0;
	}
	int getHealth() const {
		return health;
	}
	int getScore() const {
		return score;
	}
	void increaseScore(int points) {
		score += points;
	}
	void displayInfo() const {
		std::cout << "Player: " << name << ", Health: " << health << ", Score: " << score << std::endl;
	}
};