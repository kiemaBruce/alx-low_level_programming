#include "main.h"

/**
  * _sqrt_recursion - returns natural square root of a number
  * @n: the number whose square root is to be determined
  *
  * Return: the square root of the number as an int, and -1 if the number does
  * not have a natural square root
  */
int _sqrt_recursion(int n)
{
	float a, b;

	a = (float)n;
	b = 1;

	return (getSqrt(a, b));
}
/**
  * getSqrt - calculates the natural square root of a number
  * @x: the number whose square root is to be determined
  * @y: the number that x is divided by in order to determine its square root
  * Description: x is divided by all integers that are less than half of it and
  * when the result equals y, it means that y is the square root. Otherwise, x
  * has no natural square root
  *
  * Return: the square root as an int, and -1 if x has no natural square root
  */
int getSqrt(float x, float y)
{
	if ((x / y) == y)
	{
		return (y);
	}
	if (y > (x / 2))
	{
		return (-1);
	}
	/* else */
	return ((int)getSqrt(x, (y + 1)));
}
