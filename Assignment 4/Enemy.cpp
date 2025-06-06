#include <iostream>
class Enemy {
protected:
	int health;
	int damage;
	int speed;
public:
	Enemy(int h, int d, int s) : health(h), damage(d), speed(s) {}
	void takeDamage(int amount) {
		health -= amount;
		if (health < 0) health = 0;
	}
	int getHealth() const {
		return health;
	}
	int getDamage() const {
		return damage;
	}
	int getSpeed() const {
		return speed;
	}
	virtual void attack() {
		std::cout << "Enemy attacks for " << damage << " damage!" << std::endl;
	}
};
