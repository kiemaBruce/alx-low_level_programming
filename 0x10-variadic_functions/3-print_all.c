#include "variadic_functions.h"

/**
  * print_all - prints anything.
  * @format: a constant pointer to a constant char, which is the format
  * specifier to determine what is printed
  * Description: format specifiers include: c for char, i for integer, f for
  * float, and s for char * in which case (nil) is printed if the string is
  * NULL. Any other char is ignored.
  */
void print_all(const char * const format, ...)
{
	int i, flen, d;
	va_list args;

	i = 0;

	while (format != NULL)
	{
		flen = getLength((char *)format);
		va_start(args, format);

		while (i < flen)
		{
			d = determiner(format[i], args);

			if (i != (flen - 1))
			{
				if (d == 0)
				{
					printf(", ");
				}
			}
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
/**
  * determiner - prints the output according to the format specifier c
  * @c: format specifier that informs the program what type of data to expect
  * to print. It can be: c for char, i for integer, f for float or s for
  * char *. Any other char is ignored.
  * @args: variable list of arguments of the type va_list
  * Return: 1 if the char is not among the four format specifiers, 0 otherwise
  */
int determiner(char c, va_list args)
{
	char *s;

	switch (c)
	{
		case 'c':
			/**
			  *va_arg only takes fully promoted types, i.e.,
			  *int in this case, hence have to
			  *cast it back to char
			  */
			printf("%c", (char)va_arg(args, int));
			return (0);
		case 'i':
			printf("%d", va_arg(args, int));
			return (0);
		case 'f':
			/**
			  *va_arg only takes fully promoted types, i.e.,
			  *double in this case, hence have to
			  *cast it back to float
			  */
			printf("%f", (float)va_arg(args, double));
			return (0);
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			printf("%s", s);
			return (0);
		default:
			return (1);
	}
}
/**
  * getLength - determines the length of a string
  * @s: the string whose length is to be determined
  * Return: returns the length of the string as an int
  */
int getLength(char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
