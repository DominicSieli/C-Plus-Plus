#pragma once

#include <iostream>

int a = 10;
auto b = a;
decltype(a) c = a;
using using_aType = decltype(a); using_aType d = a;
typedef decltype(a) typedef_aType; typedef_aType e = a;

int main()
{
	std::cout << "a = " << a << " - Type: " << typeid(a).name() << '\n';
	std::cout << "b = " << b << " - Type: " << typeid(b).name() << '\n';
	std::cout << "c = " << c << " - Type: " << typeid(c).name() << '\n';
	std::cout << "d = " << d << " - Type: " << typeid(d).name() << '\n';
	std::cout << "e = " << e << " - Type: " << typeid(e).name() << '\n';

	std::cin.get();
}