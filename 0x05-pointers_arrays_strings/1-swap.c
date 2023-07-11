#include "main.h"

/**
  * swap_int - swaps the values of two integers
  * @a: the pointer to integer 1
  * @b: the pointer to integer 2
  */
void swap_int(int *a, int *b)
{
	/**
	   *A pointer to an int to be used to temporarily hold value of one of
	   *the pointers
	   */
	int h;

	h = *a;
	*a = *b;
	*b = h;
}
