#include <stdio.h>

/**
  * _strlen_recursion - _strlen_recursion using recursion
  * @s: the string whose length is to be determined
  * Return: length of the string as an integer
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	/* else */
	return (1 + _strlen_recursion(s + 1));
}
