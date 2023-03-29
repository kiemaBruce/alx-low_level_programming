#include "main.h"

/**
  * puts_half - prints half of a string, followed by a new line.
  * @str: the string to be printed
  * Description: the function prints the second half of the string. If the
  * number of characters is odd, the function prints the last n characters
  * of the string, where n = (length_of_the_string - 1) / 2
  */
void puts_half(char *str)
{
	int len, i;

	len = 0;

	while (str[len])
	{
		len++;
	}
	if ((len % 2) != 0)
	{
		i = (len / 2) + 1;
	} else
	{
		i = len / 2;
	}
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
