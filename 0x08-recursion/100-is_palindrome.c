#include "main.h"

/**
  * is_palindrome - determines whether a string is a palindrome or not
  * @s: the string to be checked
  * Return: 1 if the string is a palindrome and 0 if it's not
  */
int is_palindrome(char *s)
{
	int length, x;

	x = 0;
	length = getLength(s, x);
	return (checkPal(s, x, (length - 1), length));
}
/**
  * getLength - determines the length of a string
  * @s: the string whose length is to be determined
  * @i: starting index that is used to determine length, ideally it should be 0
  * Description: the terminating null byte is not counted
  *
  * Return: the length of the string as an int
  */
int getLength(char *s, int i)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	if (s[i] == '\0')
	{
		return (i);
	}
	return (getLength(s, (i + 1)));
}
/**
  * checkPal - checks whether a string is a palindrome or not
  * @s: the string to be checked
  * @x: index of the first character of the string
  * @y: index of the last character of the string
  * @z: the length of the string without counting the terminating null byte
  *
  * Return: 1 if the string is a palindrome, and 0 if it's not
  */
int checkPal(char *s, int x, int y, int z)
{
	if (s[0] == '\0')
	{
		return (1);
	}
	if (x > (z / 2))
	{
		return (1);
	}
	if (s[x] != s[y])
	{
		return (0);
	}
	return (checkPal(s, (x + 1), (y - 1), z));
}
