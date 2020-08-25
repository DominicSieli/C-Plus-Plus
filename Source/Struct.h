#pragma once

#include <vector>
#include <iomanip>
#include <iostream>
#include <type_traits>

struct Struct
{
	unsigned int data;
};

std::vector<Struct> structs;

int main()
{
	for(unsigned int i = 0; i < 10; i++)
	{
		Struct newStruct;
		newStruct.data = 0;
		structs.push_back(newStruct);
	}

	for(unsigned int i = 0; i < structs.size(); i++)
	{
		std::cout << structs[i].data << '\n';
	}

	std::cout << '\n' << "Struct size : " << sizeof(Struct);
	std::cout << '\n' << "Struct is plain old data : " << std::boolalpha << std::is_pod<Struct>{} << '\n';
	std::cin.get();
}