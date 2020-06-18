#include <string>
#include <vector>
#include <iostream>

struct Player
{
	bool active;
	std::string name;
	unsigned int health;

	Player(std::string name) : active(true), name(name), health(100){}
	~Player(){}
};

std::vector<Player> players;

int main()
{
	for(unsigned int i = 0; i < 10; i++)
	{
		Player player("Player" + std::to_string(i));
		players.push_back(player);
	}

	for(unsigned int i = 0; i < players.size(); i++)
	{
		std::cout << players[i].name << "\n";
	}

	std::cout << "\n" << "Player Count: " << players.size();
	std::cin.get();
}