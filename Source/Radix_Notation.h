#include <bitset>
#include <iomanip>
#include <iostream>

unsigned int octal = 012; // Octal notation
unsigned int binary = 0b1010; // Binary notation
unsigned int hexadecimal = 0xa; // Hexadecimal notation

int main()
{
    std::cout << "Integer: " << std::dec << binary << std::endl;
	std::cout << "Binary: " << std::bitset<4>(binary) << std::endl;

    std::cout << "\n";

    std::cout << "Integer: " << std::dec << octal << std::endl;
	std::cout << "Octal: " << std::oct << octal << std::endl;

    std::cout << "\n";

    std::cout << "Integer: " << std::dec << hexadecimal << std::endl;
	std::cout << "Hexadecimal: " << std::hex << hexadecimal << std::endl;

	std::cin.get();
}