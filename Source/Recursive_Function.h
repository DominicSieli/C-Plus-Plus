#pragma once
#include <iostream>

unsigned int Factorial(unsigned int n)
{
    if(n > 1)
    {
        return n * Factorial(n - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
	std::cout << Factorial(6) << '\n';
	std::cin.get();
}