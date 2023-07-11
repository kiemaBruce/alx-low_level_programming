#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: first string to be compared
  * @s2: second string to be compared
  *
  * Return: zero if the the two strings are equal. If a difference is
  * encountered, it returns a negative number if the ASCII value of the
  * character in s1 is less than that of the corresponding character in s2. And
  *it returns a positive number if the character in s1 has a larger ASCII value
  * than the corresponding character in s2. The positive or negative number is
  * the difference in ASCII value between the two characters
  */
int _strcmp(char *s1, char *s2)
{
	int i, r, ls1;

	ls1 = 0;

	while (s1[ls1])
	{
		ls1++;
	}

	for (i = 0; i < (ls1 + 1); i++)
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		if (s1[i] == s2[i] && s1[i] == '\0')
		{
			r = 0;
			break;
		}
	}
	return (r);
}
