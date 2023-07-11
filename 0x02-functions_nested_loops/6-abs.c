#include "main.h"

/**
  * _abs -  computes the absolute value of an integer
  * @a: integer whose absolute value is to be determined
  *
  *Return: the absolute value of a
  */
int _abs(int a)
{
	int ret;

	if (a > 0 || a == 0)
	{
		ret = a;
	} else if (a < 0)
	{
		ret = 0 - a;
	}
	return (ret);
}
