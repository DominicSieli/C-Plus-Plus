#pragma once

#include <string>
#include <iostream>

enum Color
{
	red = 31,
	blue = 34,
	green = 32,
	yellow = 33
};

#define LOG(...) std::cout << "\033[1;" + std::to_string(yellow) + "m" << (__VA_ARGS__) << '\n';