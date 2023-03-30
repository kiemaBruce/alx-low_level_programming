#include "main.h"

/**
  * _strncpy - copies a string, including terminating null byte
  * @dest: the destination buffer where the string is to be copied to
  * @src: the source string to be copied to the destination buffer
  * @n: the number of bytes from src to be copied to dest buffer
  * Description: if n is greater than the length of src, the
  * remaining spaces are filled with the null byte.
  * Return: a pointer to dest string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
