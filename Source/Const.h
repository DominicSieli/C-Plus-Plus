#pragma once
#include <iostream>

int variable = 200; // Mutable variable
const int CONSTANT = 100; // Immutable value
const int* constValue = &variable; // constValue* points to address of &variable
int* const constAddress = &variable; // constAddress* points to address of &variable
const int* const constValueAndAddress = &variable; // constValueAndAddress* points to address of &variable

class ConstClass
{
private:
	int data = 400;

public:
	// Returns a const int& reference and cannot modify member variables and also cannot call non-const functions
	const int& ConstFunction() const
	{
		return this->data;
	}
};

int main()
{
	std::cout << "Value of CONSTANT: " << *constValue << '\n'; // Print value of CONSTANT
	std::cout << "Value of constAddress: " << *constAddress << '\n'; // Print value of constAddress
	std::cout << "Address of constAddress: " << constAddress << '\n'; // Print address of constAddress

	std::cin.get(); // Wait for input
}