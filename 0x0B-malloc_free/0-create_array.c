#include "main.h"

/**
  * create_array - creates an array of chars and initializes it
  * @size: the size of the array
  * @c: the character that is used to initialize the array
  *
  * Return: a pointer to the array, and NULL if it fails or if size = 0
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ps;

	if (size == 0)
	{
		return (NULL);
	}
	ps = (char *)malloc(size * sizeof(char));

	if (ps == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ps[i] = c;
	}
	return (ps);
}
