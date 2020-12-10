#include <iostream>

namespace NameSpace_1
{
	int data = 10;
}

namespace NameSpace_2
{
	float data = 20.00f;
}

int main()
{
	std::cout << "NameSpace_1 data: " << NameSpace_1::data << '\n';
	std::cout << "NameSpace_2 data: " << NameSpace_2::data << '\n';

	std::cin.get();
}