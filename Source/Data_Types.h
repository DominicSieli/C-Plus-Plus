#pragma once

#include <iostream>

int x = 10;
//auto y = x;
decltype(x) y = x;

int main()
{
	std::cout << "X = " << x << '\n';
	std::cout << "Y = " << y << '\n';
	std::cin.get();
}