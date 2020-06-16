#include <iostream>

int main()
{
	int i = 10; // Integer i equals 10
	int* p = &i; // Integer* pointer p equals address of integer &i

	std::cout << "Value of i: " << *p << std::endl; // Print value of i
	std::cout << "Address of i: " << p << std::endl; // Print address of i

	std::cin.get(); // Wait for input
}