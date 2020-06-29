#pragma once
#include <iostream>

int main()
{
	int i = 10; // Integer i equals 10
	int* p = &i; // Integer* pointer p equals address of integer &i

	std::cout << "Value of i: " << *p << '\n'; // Print value of i
	std::cout << "Address of i: " << p << '\n'; // Print address of i

	std::cin.get(); // Wait for input
}