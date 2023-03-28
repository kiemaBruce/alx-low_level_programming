#include "main.h"

void swap_int(int *a, int *b)
{
	/* A pointer to an int to be used to temporarily hold value of one of
	 * the pointers
	 */
	int *h;

	h = a;
	a = b;
	b = a;
}
