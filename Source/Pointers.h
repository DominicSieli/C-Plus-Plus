#pragma once

#include <iostream>

int integer = 10;
int *pointer = &integer;
int **pointerPointer = &pointer;

int main()
{
	std::cout << "Value of integer: " << *pointer << '\n';
	std::cout << "Address of integer: " << pointer << '\n';

	std::cout << '\n';

	std::cout << "Value of integer: " << **pointerPointer << '\n';
	std::cout << "Address of pointer: " << *pointerPointer << '\n';

	std::cin.get();
}