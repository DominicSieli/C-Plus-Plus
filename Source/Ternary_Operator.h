#include <iostream> // Preprocessor directive includes iostream file

bool isTrue = (1>0) ? true : false; // Ternary operator evaluates to true
bool isFalse = (1<0) ? true : false; // Ternary operator evaluates to false

int main() // Main function is executable entry point
{
    std::cout << isTrue << std::endl; // Outputs 1 (true)
    std::cout << isFalse << std::endl; // Outputs 0 (false)

	std::cin.get(); // Waits for console input from user
}