#include "main.h"

/**
  *_isalpha - checks for alphabetic character
  * @c: the character to be checked
  *
  *Return: 1 if c is a lowercase or uppercase letter, 0 otherwise
  */
int _isalpha(int c)
{
	int test = 0;

	if (c > 96 && c < 123)
	{
		test = 1;
	}
	if (c > 64 && c < 91)
	{
		test = 1;
	}
	return (test);
}
