#include "main.h"

/**
  * _islower - checks for lowercase character
  * @c: the character to be checked
  *
  *Return: 1 if c is a lowercase character and 0 otherwise
  */
int _islower(int c)
{
	int ret = 0;

	if (c > 96 && c < 123)
	{
		ret = 1;
	}
	return (ret);
}
