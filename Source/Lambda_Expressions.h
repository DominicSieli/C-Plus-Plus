#pragma once
#include <cmath>    // Preprocessor directive includes cmath file
#include <iostream> // Preprocessor directive includes iostream file

auto Square = [](int n) -> int { return n * n; };         // Lambda funcion squares n
auto Sum = [](int n1, int n2) -> int { return n1 + n2; }; // Lambda funcion sums n1 and n2

int main() // Main function is the executables entry point
{
    int n = 64;
    auto SquareRoot = [=]() -> int { return sqrt(n); }; // Lambda captures all local variables (n) in captue clause[n] by value

    std::cout << Sum(2, 6) << '\n';
    std::cout << Square(4) << '\n';
    std::cout << SquareRoot() << '\n';

    [&](int x = 4) { n -= x; }(4); // Lambda captures all local variables (n) in captue clause[n] by reference
    std::cout << n << '\n';

    std::cin.get(); // Waits for console input from user
}