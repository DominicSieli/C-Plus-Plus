#pragma once

#include <iostream>

int a = 10;
auto b = a;
decltype(a) c = a;
using using_aType = decltype(a); using_aType d = a;
typedef decltype(a) typedef_aType; typedef_aType e = a;

int main()
{
	std::cout << "a = " << a << '\n';
	std::cout << "b = " << b << '\n';
	std::cout << "c = " << c << '\n';
	std::cout << "d = " << d << '\n';
	std::cout << "e = " << e << '\n';

	std::cin.get();
}