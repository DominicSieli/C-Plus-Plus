#include <iostream>

enum
{
	anonymousInt_0,
	anonymousInt_1,
	anonymousInt_2
};

enum : unsigned short
{
	anonymousUnsignedShort_0,
	anonymousUnsignedShort_1,
	anonymousUnsignedShort_2
};

enum Enum : unsigned short
{
	EnumData_0,
	EnumData_1,
	EnumData_2
};

enum class EnumClass : unsigned short
{
	EnumClassData_0,
	EnumClassData_1,
	EnumClassData_2
};

int main()
{
	unsigned short enumeration = 0;
	EnumClass enumClass = (EnumClass)enumeration;

	switch(enumClass)
	{
		case EnumClass::EnumClassData_0 : std::cout << "Loaded Data 0" << '\n';
		break;

		case EnumClass::EnumClassData_1 : std::cout << "Loaded Data 1" << '\n';
		break;

		case EnumClass::EnumClassData_2 : std::cout << "Loaded Data 2" << '\n';
		break;

		default : break;
	}

	std::cin.get();
}