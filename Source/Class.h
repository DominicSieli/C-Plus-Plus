#include <iostream>

class Base
{
private:
	unsigned int data = 0;
	static unsigned int Count;

public:
	Base(const unsigned int& value = 0)
		: data{value}
	{
		Count++;
	}

	~Base()
	{
		Count--;
	}

	unsigned int GetData() const
	{
		return this->data;
	}

	void SetData(const unsigned int& value)
	{
		this->data = value;
	}

	static unsigned int GetCount()
	{
		return Count;
	}
};

unsigned int Base::Count = 0;

int main()
{
	Base stackBase(2);
	Base* heapBase = new Base(4);

	std::cout << stackBase.GetData() << std::endl;
	std::cout << heapBase->GetData() << std::endl;
	std::cout << Base::GetCount() << std::endl;

	delete heapBase;

	std::cin.get();
}