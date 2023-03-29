#include "main.h"

/**
  * _strcpy - copies a string to a buffer
  * @dest: the pointer to the destination buffer
  * @src: points to the source string
  * Description: copies the string pointed to by src, including the terminating
  * null byte (\0), to the buffer pointed to by dest
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int length, i, b;

	b = 0;
	length = 0;

	while (src[b])
	{
		length++;
		b++;
	}
	for (i = 0; i < length; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
