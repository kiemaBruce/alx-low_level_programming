#include "main.h"

/**
  * rev_string - reverses a string
  * @s: the string to be reversed
  */
void rev_string(char *s)
{
	int len, i;
	char temp;

	len = _strleN(s);
	len = len - 1;

	for (i = 0; i <= (len / 2); i++)
	{
		temp = s[i];
		s[i] = s[len - i];
		s[len - i] = temp;
	}
}
/**
  * _strleN - determines string length minus the trailing \0
  * @s: the string whose length is to be determined
  * Return: the string length as an integer
  */
int _strleN(char *s)
{
	int i, length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
