#include "main.h"

/**
  * _isupper - checks for uppercase character
  * @c: the character to be checked
  *Return: 1 if c is uppercase, 0 otherwise
  */
int _isupper(int c)
{
	int r;

	if (c > 64 && c < 91)
	{
		r = 1;
	} else
	{
		r = 0;
	}
	return (r);
}
