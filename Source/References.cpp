#include <iostream>

int i = 10;

int main()
{
	int &r = i;
	std::cout << "Value of i: " << r << '\n';
	std::cout << "Address of i: " << &r << '\n';

	std::cin.get();
}