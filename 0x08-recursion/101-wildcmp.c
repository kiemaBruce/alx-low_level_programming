#include "main.h"

/**
  * wildcmp - compares two strings
  * @s1: first string to be compared
  * @s2: second string to be compared
  * Description: s2 may contain the special character * which can replace any
  * string
  * Return: 1 if the strings are identical, 0 if they are not
  */
int wildcmp(char *s1, char *s2)
{
	return (compS(s1, s2, 0, 0));
}
/**
  * compS - compares two strings
  * @s1: first string to be compared
  * @s2: second string to be compared
  * @x: starting index for s1, ideally it should be 0
  * @y: starting index for s2, ideally it should be 0
  * Description: s2 may contain the special character * which can replace any
  * string.
  *
  * Return: 1 if the strings are identical and 0 if they are not
  */
int compS(char *s1, char *s2, int x, int y)
{
	/*End of both strings*/
	if ((s1[x] == s2[y]) && s1[x] == '\0')
	{
		return (1);
	}
	if (s2[y] == '*')
	{
		return (compS(s1, s2, indexAdvancer(s1, s2, x, x, y + 1), y + 1));
	}
	/* If s1[x] isn't equal to s2[y] and s2[y] isn't equal to '*' */
	if (s1[x] != s2[y])
	{
		return (0);
	}
	return (compS(s1, s2, x + 1, y + 1));
}
/**
  * indexAdvancer - increases the index of s1
  * @s1: first string to be compared
  * @s2: second string to be compared
  * @X: the original index of x where the corresponding character in s2 was a
  * '*'
  * @x: incrementing index of s1 that is compared to the next character in s2
  * after the *
  * @y: the index of s2 where the '*' is located
  * Return: if a character is found in s1 that matches the next character after
  * '*' in s2, return the index of that character in s1, if no character is
  * found return the original index of s1 that corresponded to the '*'.
  */
int indexAdvancer(char *s1, char *s2, int X, int x, int y)
{
	/*Return the index of x where there is a matching character if found*/
	if (s1[x] == s2[y])
	{
		return (x);
	}
	/**
	  * If there are no matching characters in s2 and we've reached the end
	  * of s1, return the original index of X that was passed.
	  */
	if (s1[x] == '\0')
	{
		return (X);
	}
	return (indexAdvancer(s1, s2, X, x + 1, y));
}
