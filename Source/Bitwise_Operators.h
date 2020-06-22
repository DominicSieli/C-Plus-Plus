#include <bitset>
#include <iostream>

std::bitset<4> b_1010 = 0b1010; // Binary notation
std::bitset<4> b_0101 = 0b0101; // Binary notation
std::bitset<4> b_1100 = 0b1100; // Binary notation
std::bitset<4> b_0011 = 0b0011; // Binary notation

int main()
{
    std::cout << "NOT - ~" << std::endl;
    std::cout << " " << b_1010 << std::endl;
    std::cout << "=" << ~b_1010 << std::endl;

    std::cout << std::endl;

    std::cout << "AND - &" << std::endl;
    std::cout << " " << b_1010 << std::endl;
    std::cout << " " << b_1100 << std::endl;
    std::cout << "=" << (b_1010 & b_1100) << std::endl;

    std::cout << std::endl;

    std::cout << "OR - |" << std::endl;
    std::cout << " " << b_1010 << std::endl;
    std::cout << " " << b_1100 << std::endl;
    std::cout << "=" << (b_1010 | b_1100) << std::endl;

    std::cout << std::endl;

    std::cout << "XOR - ^" << std::endl;
    std::cout << " " << b_1010 << std::endl;
    std::cout << " " << b_1100 << std::endl;
    std::cout << "=" << (b_1010 ^ b_1100) << std::endl;

    std::cout << std::endl;

    std::cout << "Shift Left by 1 - 1010 << 1" << std::endl;
    std::cout << " " << b_1010 << std::endl;
    std::cout << "=" << (b_1010 << 1) << std::endl;

    std::cout << std::endl;

    std::cout << "Shift Right by 1 - 1010 >> 1" << std::endl;
    std::cout << " " << b_1010 << std::endl;
    std::cout << "=" << (b_1010 >> 1) << std::endl;

    std::cout << std::endl;

	std::cin.get();
}