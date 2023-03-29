#include "main.h"

/**
  * puts2 - prints every other character of a string.
  * @str: the string to be printed
  * Description: prints every other character of a string, starting with the
  * first character, followed by a new line
  */
void puts2(char *str)
{
	int i, length, b;

	i = 0;
	length = 0;

	while (str[i])
	{
		length++;
		i++;
	}
	for (b = 0; b < length; b = b + 2)
	{
		_putchar(str[b]);
	}
	/**
	  *The condition basically returns 1 or true when there's a value
	  apart from \0 at that index, and returns 0 or false when there is no
	  *value or it encounters the \0 character.
	  */
	/**
	  *while (str[i])
	  *{
	  *	_putchar(str[i]);
	  *	i = i + 2;
	  *}
	  */
	_putchar('\n');
}
