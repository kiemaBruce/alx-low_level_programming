#include "variadic_functions.h"

/**
  * sum_them_all - returns the sum of all its parameters
  * @n: the number of parameters to be added together
  * Return: the sum, and 0 if n == 0
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum, x;

	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum = sum + x;
	}
	return (sum);
}
