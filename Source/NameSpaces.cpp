#include <iostream>

namespace nameSpace1
{
	int data = 10;
}

namespace nameSpace2
{
	float data = 20.00f;
}

int main()
{
	std::cout << "nameSpace1 data: " << nameSpace1::data << '\n';
	std::cout << "nameSpace2 data: " << nameSpace2::data << '\n';

	std::cin.get();
}