#include "main.h"

/**
  * _pow_recursion - returns the value of an exponential operation
  * @x: the number to be raised
  * @y: the number x is to be raised by
  *
  * Return: the result
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	/* else */
	return (x * _pow_recursion(x, (y - 1)));
}
