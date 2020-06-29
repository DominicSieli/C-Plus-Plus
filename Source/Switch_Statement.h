#pragma once
#include <iostream>

unsigned short currentScene = 2;

int main()
{
	enum class Scenes : unsigned short
	{
		Scene_0,
		Scene_1,
		Scene_2
	};

	Scenes scenes = (Scenes)currentScene;

	switch(scenes)
	{
		case Scenes::Scene_0 : std::cout << "Loaded Scene 0" << '\n';
		break;

		case Scenes::Scene_1 : std::cout << "Loaded Scene 1" << '\n';
		break;

		case Scenes::Scene_2 : std::cout << "Loaded Scene 2" << '\n';
		break;

		default :
		break;
	}

	std::cin.get();
}