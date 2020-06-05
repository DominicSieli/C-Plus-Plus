#include <iostream>

int main()
{
	try
	{
		10/0;
	}
	catch(std::length_error)
	{
		std::cout << "Cannot devide by zero!" << std::endl;
	}

	std::cin.get();
}