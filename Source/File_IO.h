#pragma once

#include <string>
#include <fstream>
#include <iostream>

#include "System_Commands.h"

int main()
{
	system(CREATE_DIRECTORY "File_IO");
	system(CREATE_FILE "File_IO" SLASH "Output.txt");

	std::ifstream readFile;

	readFile.open("File_IO" SLASH "Output.txt", std::ios_base::in);

	if (readFile.is_open())
	{
		std::string text = "";

		while (readFile.good())
		{
			getline(readFile, text);

			std::cout << text << '\n';
		}

		readFile.close();
	}

	std::cin.get();

	std::ofstream writeFile;

	writeFile.open("File_IO" SLASH "Output.txt", std::ios_base::out | std::ios_base::trunc);

	if (writeFile.is_open())
	{
		std::string text = "";

		for (int i = 1; i < 21; i++)
		{
			text += "Line: " + std::to_string(i) + '\n';
		}

		writeFile << text;
		writeFile.close();
	}
}