#include <iostream>

int *pointer = nullptr;

int main()
{
	pointer = new int(10);

	std::cout << "Value of pointer: " << *pointer << '\n';
	std::cout << "Address of pointer: " << pointer << '\n';

	delete pointer;
	pointer = nullptr;
	delete pointer;

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