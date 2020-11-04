#include <iostream>

bool isTrue = (1>0) ? true : false;
bool isFalse = (1<0) ? true : false;

int main()
{
    std::cout << isTrue << '\n';
    std::cout << isFalse << '\n';

	std::cin.get();
}