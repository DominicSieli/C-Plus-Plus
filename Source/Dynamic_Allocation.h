#include <iostream>

int *pointer = new int(10);

int main()
{
	std::cout << "Value of pointer: " << *pointer << '\n';
	std::cout << "Address of pointer: " << pointer << '\n';

	delete pointer;
	pointer = nullptr;

	if (pointer != nullptr)
	{
		std::cout << "Value of pointer: " << *pointer << '\n';
	}

	if (pointer != nullptr)
	{
		std::cout << "Address of pointer: " << pointer << '\n';
	}

	std::cin.get();
}