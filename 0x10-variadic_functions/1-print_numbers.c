#include "variadic_functions.h"

/**
  * print_numbers - prints numbers, followed by a new line
  * @separator: the string to be printed between numbers
  * @n: the number of numbers to be printed
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);
		printf("%u", x);
		if (i != (n - 1))
		{
			if (separator != NULL)
			{
				printf("%c", *separator);
			}
		}
	}
	printf("\n");
}
