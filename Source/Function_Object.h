#include <iostream>

template<typename T>
class FunctionObject
{
private:
	const T value;
public:
	FunctionObject(const T& v) : value(v){}
	T GetValue() const {return this->value;}
	bool operator()(const T& x) const {return x<value;}
};

int main()
{
	int number = 4;
	FunctionObject<int> functor(10);

	if(functor(number) == true) // Predicate statement
	{
		std::cout << number << " < " << functor.GetValue() << std::endl;
	}
	else
	{
		std::cout << number << " > " << functor.GetValue() << std::endl;
	}

	std::cin.get();
}