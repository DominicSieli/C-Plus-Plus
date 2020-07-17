#include <initializer_list>

template <typename T>
void RangeIterator(T &variable, char sign, T value, T min, T max)
{
	T sum = 0;

	if (sign == '+')
	{
		sum = variable + value;

		if (sum > max || sum < variable)
		{
			sum = max;
		}

		variable = sum;
	}

	if (sign == '*')
	{
		sum = variable * value;

		if (sum > max || sum < variable)
		{
			sum = (variable * value) / value;
		}

		variable = sum;
	}

	if (sign == '-')
	{
		sum = variable - value;

		if (sum < min || sum > variable)
		{
			sum = min;
		}

		variable = sum;
	}

	if (sign == '/')
	{
		if (variable != 0 && value != 0)
		{
			sum = variable / value;

			if (sum < min || sum > variable)
			{
				sum = (variable / value) * value;
			}

			variable = sum;
		}
	}

	if (sign != '+' && sign != '-' && sign != '*' && sign != '/')
	{
		variable = variable;
	}
}