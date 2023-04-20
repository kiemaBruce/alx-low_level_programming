#include "variadic_functions.h"

/**
  * print_strings - prints strings followed by a new line
  * @separator: the string to be printed between the strings
  * @n: the number of strings to be printed
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	int slen, len2, j, b;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
		{
			printf("(nil)");
			return;
		}
		slen = getLength(s);
		for (j = 0; j < slen; j++)
		{
			_putchar(s[j]);
		}
		if (separator != NULL && i != (n - 1))
		{
			len2 = getLength((char *)separator);
			for (b = 0; b < len2; b++)
			{
				_putchar(*(separator + b));
			}
		}
	}
	_putchar('\n');
}
/**
  * getLength - determines the length of a string
  * @s: a pointer to the string whose length is to be determined
  * Return: the length as an int
  */
int getLength(char *s)
{
	int len;

	len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}
