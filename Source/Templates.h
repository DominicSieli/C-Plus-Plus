#pragma once

#include <iostream>

template <typename T>
void Print(const T &input)
{
	std::cout << input << '\n';
}

int main()
{
	Print(2);
	Print(2.2);
	Print('A');
	Print("Dominic");

	std::cin.get();
}