#include <iostream>
#include "Templates.h"

using namespace Templates;

int main()
{
	int value = 2;
	
	while(value < 100000)
	{
		std::cout << value << std::endl;
		RangeIterator<int>(value, '*', 2, 2, INT_MAX);
	}
	
	std::cin.get();
}