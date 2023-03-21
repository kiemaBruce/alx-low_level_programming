#include "main.h"

/**
  *print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by
  *a new line
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	int a;
	int counter = 0;

	do {
		for (a = 97; a < 123; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		counter++;
	} while (counter < 10);
}
