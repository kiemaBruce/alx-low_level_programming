#include "main.h"

/**
  * _puts_recursion - prints a string, followed by a new line
  * @s: the string to be printed
  */
void _puts_recursion(char *s)
{
	const int i = 0;

	/*_putchar(s[i]);*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion((s + 1));
}
