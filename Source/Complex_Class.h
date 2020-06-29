#pragma once
#include <iostream>

class Complex
{
private:
	double real = 0.00;
	double imaginary = 0.00;

public:
	Complex(const double& r = 0.00, const double& i = 0.00) : real{r},imaginary{i}{}

	double Real() const {return real;}

	void Real(const double& d) {real = d;}

	double Imaginary() const {return imaginary;}

	void Imaginary(const double& d) {imaginary = d;}

	Complex& operator+=(const Complex& z) {real += z.real, imaginary += z.imaginary; return *this;}

	Complex& operator-=(const Complex& z) {real -= z.real, imaginary -= z.imaginary; return *this;}

	Complex& operator*=(const Complex& z) {real *= z.real, imaginary *= z.imaginary; return *this;}

	Complex& operator/=(const Complex& z) {real /= z.real, imaginary /= z.imaginary; return *this;}
};

int main()
{
	Complex complex(2.00, 4.00);

	std::cout << complex.Real() << '\n';
	std::cout << complex.Imaginary() << '\n';

	std::cin.get();
}