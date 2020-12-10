#include <iostream>
#include <functional>

auto Print_Square = [](int n) { std::cout << n*n << "\n"; };

void Call_Print_Square(int n, std::function<void(int)> func)
{
	func(n);
}

int main()
{
	int n = 8;

	Print_Square(n);
	Call_Print_Square(n, Print_Square);

	[=](int n) { std::cout << n*n << '\n'; }(n);
	[&](int n) { std::cout << n*n << '\n'; }(n);

	std::cin.get();
}