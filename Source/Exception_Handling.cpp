#include <limits>
#include <iostream>
#include <exception>

class OutOfRange
{
private:
	int data = std::numeric_limits<int>::max();

public:
	const int GetData() const noexcept
	{
		return this->data;
	}

	void AddData(int addend)
	{
		try
		{
			if (data + addend < 1)
			{
				this->data = std::numeric_limits<int>::max();
				throw std::runtime_error("Value out of range exception in OutOfRange class SetData method!");
			}
			else
			{
				this->data += addend;
			}
		}
		catch (const std::exception &exception)
		{
			std::cerr << exception.what() << '\n';
		}
		catch (...)
		{
			std::cerr << "Runtime error in ExceptionHandling class SetData method!!" << '\n';
		}
	}
};

double Divide(double numerator, double denominator)
{
	double quotient = 0.00;

	try
	{
		if (denominator == 0.00)
		{
			throw std::runtime_error("Divide by 0 exception in Divide function!");
		}
		else
		{
			quotient = numerator / denominator;
		}
	}
	catch (std::exception &exception)
	{
		std::cerr << exception.what() << '\n';
	}
	catch (...)
	{
		std::cerr << "Runtime error in Divide function!" << '\n';
	}

	return quotient;
}

int main()
{
	OutOfRange outOfRange;

	outOfRange.AddData(10);

	std::cout << outOfRange.GetData() << '\n';

	std::cout << Divide(10.00, 0.00) << '\n';

	std::cin.get();
}