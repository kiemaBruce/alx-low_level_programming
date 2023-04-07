#include "main.h"

/**
  * is_prime_number - checks whether a number is a prime number
  * @n: the number to be checked
  *
  * Return: 1 if the number is a prime number and 0 if it's not
  */
int is_prime_number(int n)
{
	if (n < 0)
	{
		n = 0 - n;
	}
	return (checkPrime(n, n));
}
/**
  * checkPrime - checks whether a number is a prime number
  * @x: the number to be checked
  * @y: the number that x is divided by in order to determine whether it's a
  * prime number
  * Description: x is divided by all numbers less than it until a zero quotient
  * is encountered or 1 is reached.
  *
  * Return: 0 if x is a prime and 0 if it's not
  */
int checkPrime(int x, int y)
{
	if (x == 0)
	{
		return (0);
	}
	if (x == 1)
	{
		return (0);
	}
	if (x == 2)
	{
		return (1);
	}
	if ((y == 1) && x != 1)
	{
		return (1);
	}
	if (((x % y) == 0) && y > 1 && x != y)
	{
		return (0);
	}
	return (checkPrime(x, y - 1));
}
