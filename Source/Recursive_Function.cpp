#include <iostream>

#include "System_Commands.h"

unsigned long long Factorial(unsigned int n)
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

unsigned int n = 0;

int main()
{
	while(true)
    {
        std::cin >> n;
        std::cout << Factorial(n) << '\n';
	    std::cin.get();
    }
}