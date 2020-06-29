#pragma once
#include <iostream>

template<typename T>
class AbstractBaseClass
{
public:
	virtual ~AbstractBaseClass(){}

	virtual void SetData(T) = 0;
	virtual int GetData() const = 0;
};

template<typename T>
class SubClass : public AbstractBaseClass<T>
{
private:
	T data;
public:
	SubClass(T value) : data(value){}
	~SubClass(){}

	void SetData(T value) {this->data = value;}
	T GetData() const {return this->data;}
};

int main()
{
	SubClass<int> subClass(0);
	std::cout << subClass.GetData() << '\n';
	subClass.SetData(20);
	std::cout << subClass.GetData() << '\n';

	std::cin.get();
}