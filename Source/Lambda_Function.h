#include <cmath> // Preprocessor directive includes cmath file
#include <iostream> // Preprocessor directive includes iostream file

auto Square = [](int n)->int {return n * n;}; // Lambda funcion squares n
auto Sum = [](int n1,int n2)->int {return n1 + n2;}; // Lambda funcion sums n1 and n2

int main() // Main function is the executables entry point
{
    int n = 64;
    auto SquareRoot = [n]()->int {return sqrt(n);}; // Lambda captures n in captue clause[n]

    std::cout << Sum(2,6) << std::endl;
	std::cout << Square(4) << std::endl;
    std::cout << SquareRoot() << std::endl;

    [&n](int x = 4){n-=x;}(4); // Lambda captures n by reference and subtracts 4
    std::cout << n << std::endl;


	std::cin.get(); // Waits for console input from user
}