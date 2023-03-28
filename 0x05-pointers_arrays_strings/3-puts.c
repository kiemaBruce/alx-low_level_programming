#include "main.h"

/**
  * _puts - prints a string, followed by a new line, to stdout
  * @str: the string to be printed
  */
void _puts(char *str)
{
	int i, slen;

	slen = _strlen(str);

	for (i = 0; i <= slen; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
