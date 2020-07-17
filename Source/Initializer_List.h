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