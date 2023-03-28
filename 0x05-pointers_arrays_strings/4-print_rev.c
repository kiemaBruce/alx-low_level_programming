#include "main.h"

/**
  * print_rev - prints a string, in reverse, followed by a new line
  * @s: the string to be reversed
 */
void print_rev(char *s)
{
	int i, slength;
	/*char *storS;*/

	slength = _strlen(s);
	/*storS = s;*/

	for (i = 0; i <= slength; i++)
	{
		/*storS[i] = s[slength - i];*/
		_putchar(s[slength - i]);
	}
	_putchar('\n');
}
/**
  *  _strlen - determines the length of a string ignoring the trailing \0
  * @s: the string whose length is to be determined
  * Return: the length of the string as an integer
  */
int _strlen(char *s)
{
	int size, i;

	size = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		size++;
	}
	return (size);
}
