#include <iostream>

constexpr int CONSTANT = 2 * 2;
const int* CONSTANT_VALUE = &CONSTANT;
int const* CONSTANT_ADDRESS = &CONSTANT;
const int* const CONSTANT_VALUE_AND_ADDRESS = &CONSTANT;

class Const_Class
{
private:
	int data = 400;

public:
	const int &Const_Method() const
	{
		return this->data;
	}
};

int main()
{
	Const_Class const_Class;

	std::cout << "Value of Const_Class data: " << const_Class.Const_Method() << '\n';
	std::cout << "Value of CONSTANT: " << *CONSTANT_VALUE << '\n';
	std::cout << "Address of CONSTANT: " << CONSTANT_ADDRESS << '\n';
	std::cout << "Value of CONSTANT_VALUE_AND_ADDRESS: " << *CONSTANT_VALUE_AND_ADDRESS << '\n';
	std::cout << "Address of CONSTANT_VALUE_AND_ADDRESS: " << CONSTANT_VALUE_AND_ADDRESS << '\n';

	std::cin.get();
}