#include <iostream>

template<typename T>
class Container
{
public:
    virtual ~Container(){}
    virtual unsigned int Size() const = 0;
    virtual T& operator[](unsigned int) = 0;
};

template<typename T>
class Vector : public Container
{

};

int main()
{
    std::cin.get();
}