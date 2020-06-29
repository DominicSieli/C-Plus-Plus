#pragma once
#include <bitset>
#include <iomanip>
#include <iostream>

unsigned int octal = 012; // Octal notation
unsigned int binary = 0b1010; // Binary notation
unsigned int hexadecimal = 0xa; // Hexadecimal notation

int main()
{
    std::cout << "Integer: " << std::dec << binary << '\n';
	std::cout << "Binary: " << std::bitset<4>(binary) << '\n';

    std::cout << "\n";

    std::cout << "Integer: " << std::dec << octal << '\n';
	std::cout << "Octal: " << std::oct << octal << '\n';

    std::cout << "\n";

    std::cout << "Integer: " << std::dec << hexadecimal << '\n';
	std::cout << "Hexadecimal: " << std::hex << hexadecimal << '\n';

	std::cin.get();
}