#include "main.h"

/**
  * get_endianness - checks the endianness.
  * Return: 1 if the system is little endian, and 0 if it is big endian.
  */
int get_endianness(void)
{
	int x;
	char *xp;

	/**
	  * Steps:
	  * 1. Create an int, e.g 2. This will have, say, 4 bytes.
	  * 2. We need to compare the memory address of the MSB/ LSB to another.
	  * 3. Hence we can check the value at the first byte in memory. For a 2
	  * byte int, a big endian will look like this in memory:
	  * 0000000000000010, with the LSB on the right (at a lower address in
	  * memory). A little endian will store the LSB first in memory:
	  * 0010000000000000.
	  * How we check individual bytes is by casting the pointer to the int
	  * into a char * which is always one byte long. And then perform
	  * pointer arithmetic on the char * which will let us compare
	  * individual bytes of the int.
	  */
	x = 2;
	xp = (char *)&x;
	if (xp[0] == 2) /* i.e., 001000000 */
		return (1);
	else
		return (0);
}
