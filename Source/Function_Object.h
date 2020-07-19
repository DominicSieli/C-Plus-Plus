#pragma once

#include <iostream>

template <typename T>
class FunctionObject
{
private:
	const T value;

public:
	FunctionObject(const T &v) : value(v) {}
	T GetValue() const { return this->value; }
	bool operator()(const T &x) const { return x < value; }
};

int main()
{
	int number = 4;
	FunctionObject<int> functor(10);

	if (functor(number) == true)
	{
		std::cout << number << " < " << functor.GetValue() << '\n';
	}
	else
	{
		std::cout << number << " > " << functor.GetValue() << '\n';
	}

	std::cin.get();
}