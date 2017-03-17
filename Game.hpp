#ifndef GAME_HPP
#define GAME_HPP

#include <string>

class Game {
	int power, economy, popularity, religion, military, balance, foreign;
	std::string name;
public:
	void Game();
	void load();
	void welcome();
	bool still_alive();
	void step();
}

#endif // GAME_HPP
