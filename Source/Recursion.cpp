#include <iostream>

unsigned int Factorial(unsigned int n)
{
    if(n < 2) {return 1;}
    return n * Factorial(n - 1);
}

unsigned int Fibonacci(unsigned int n)
{
    if(n < 2) {return n;}
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
	std::cout << Factorial(5) << '\n';
    std::cout << Fibonacci(8) << '\n';

    std::cin.get();
}