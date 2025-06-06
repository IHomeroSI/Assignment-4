#include <iostream>
class Game {
private:
	std::string title;
	int maxPlayers;
	float price;
public:
	Game(std::string gameTitle, int players )
		: title(gameTitle), maxPlayers(players) {
	}
	void displayInfo() const {
		std::cout << "Game Title: " << title << std::endl;
		std::cout << "Max Players: " << maxPlayers << std::endl;
	}
};