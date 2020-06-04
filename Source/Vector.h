#include <iostream>

template<typename T>
class Vector
{
private:
    unsigned int size = 0;
    T* vectorPointer = nullptr;

public:
    Vector(unsigned int intitialSize = 0) : size{intitialSize}, vectorPointer{new T[intitialSize]}{}

    ~Vector() {delete[] this->vectorPointer;}

    T& operator[](unsigned int index) {return this->vectorPointer[index];}

    unsigned int Size() const {return this->size;}
};

int main()
{
    Vector<int> vector(10);

    for(unsigned int i = 0; i < vector.Size(); i++)
    {
        vector[i] = (int)i;
    }

    for(unsigned int i = 0; i < vector.Size(); i++)
    {
        std::cout << vector[i] << std::endl;
    }

    std::cin.get();
}