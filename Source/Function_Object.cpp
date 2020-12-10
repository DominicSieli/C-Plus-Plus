#include <iostream>

template<typename T>
class Function_Object
{
private:
	const T value;

public:
	Function_Object(const T& v) : value{v} {}
	T Get_Value() const { return this->value; }
	bool operator()(const T& x) const { return x < value; }
};

int main()
{
	int number = 4;
	Function_Object<int> functor(10);

	if(functor(number) == true)
	{
		std::cout << number << " < " << functor.Get_Value() << '\n';
	}
	else
	{
		std::cout << number << " > " << functor.Get_Value() << '\n';
	}

	std::cin.get();
}