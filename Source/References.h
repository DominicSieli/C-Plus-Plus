#pragma once
#include <iostream>

int main()
{
	int i = 10; // Integer i equals 10
	int& r = i; // Integer& reference r is an alias of integer i

	std::cout << "Value of i: " << r << '\n'; // Print value of i
	std::cout << "Address of i: " << &r << '\n'; // Print address of i

	std::cin.get(); // Wait for input
}