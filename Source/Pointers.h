#pragma once

#include <memory>
#include <iostream>

int integer = 10;
int *pointer = &integer;
int **pointerPointer = &pointer;

std::unique_ptr<int> uniquePointer(new int(integer));

int main()
{
	std::cout << "Value of integer: " << *pointer << '\n';
	std::cout << "Address of integer: " << pointer << '\n';

	std::cout << '\n';

	std::cout << "Value of integer: " << **pointerPointer << '\n';
	std::cout << "Address of pointer: " << *pointerPointer << '\n';

	std::cout << '\n';

	std::cout << "Value of integer: " << *uniquePointer << '\n';
	std::cout << "Address of integer: " << &uniquePointer << '\n';

	std::cin.get();
}