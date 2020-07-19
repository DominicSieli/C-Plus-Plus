#include <iostream>
#include <initializer_list>

template <typename T>
T Total(std::initializer_list<T> list)
{
	T total = 0;

	for (T element : list)
	{
		total += element;
	}

	return total;
}

int main()
{
	std::cout << Total<int>({1, 2, 3, 4, 5, 6, 7, 8, 9, 10}) << '\n';
	std::cin.get();
}