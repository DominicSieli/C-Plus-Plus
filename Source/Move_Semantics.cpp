#include <iostream>

template<typename T>
class Array
{
private:
	unsigned int n = 0;
	T* array = nullptr;

public:
	Array(const unsigned int& n) : n{n}, array{new T[n]}
	{

	}

	Array(Array&& move_class) : n{move_class.n}, array{move_class.array}
	{
		std::cout << "Array Moved" << '\n';
	}

	Array(const Array& copy_class) : n{copy_class.n}, array{copy_class.array}
	{
		std::cout << "Array Copied" << '\n';
	}

	Array& operator=(Array&& move_class)
	{
		n = {move_class.n};
		array = {move_class.array};
		std::cout << "Array Moved" << '\n';
		return *this;
	}

	Array& operator=(const Array& copy_class)
	{
		n = {copy_class.n};
		array = {copy_class.array};
		std::cout << "Array Copied" << '\n';
		return *this;
	}

	T& operator[](const unsigned int& index)
	{
		return array[index];
	}

	unsigned int Size() const
	{
		return n;
	}
};

int main()
{
	Array<int> array_1(10);

	for(unsigned int i = 0; i < array_1.Size(); i++)
	{
		array_1[i] = i;
	}

	Array<int> array_2(std::move(array_1));
	//array_2 = std::move(array_1);

	for(unsigned int i = 0; i < array_2.Size(); i++)
	{
		std::cout << array_2[i] << '\n';
	}

	std::cin.get();
}