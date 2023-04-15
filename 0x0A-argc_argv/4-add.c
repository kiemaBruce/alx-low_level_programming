#include "main.h"

/**
  * main - adds positive numbers
  * @argc: a count of the arguments passed to the program
  * @argv: an array of pointers to strings; the strings are the arguments
  * passed to the program.
  * Description: if no number is passed it prints 0. If one of the numbers
  * contains symbols that are not digits, it prints Error. If all are numbers,
  * it prints the sum. A new line is printed afterwards for all cases.
  * Return: 0 if no number is passed to the program or if all arguments passed
  * are numbers. It returns 1 if one of the numbers contains symbols that are
  * not digits.
  */
int main(int argc, char *argv[])
{
	int i, sum, b;
	char *arg1;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	/* Check all inputs to see whether there's a non-digit */
	for (i = 1; i < argc; i++)
	{
		if (checkNumber(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
	}
	/* All arguments are digits */
	sum = 0;

	for (b = 1; b < argc; b++)
	{
		sum = sum + atoi(argv[b]);
	}
	printf("%d\n", sum);
	return (0);
}
/**
  * getLength - determines the length of a string
  * @s: pointer to the string whose length is to be determined
  * Return: the length of the string as an int
  */
int getLength(char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
/**
  * checkNumber - determines whether a string has a non-digit
  * @s: pointer to the string to be checked
  * Return: 1 if the string has a non-digit, 0 if it is a number
  */
int checkNumber(char *s)
{
	int i, slen;

	slen = getLength(s);

	for (i = 0; i < slen; i++)
	{
		if (s[i] < 48 || s[i] > 57)
		{
			return (1);
		}
	}
	return (0);
}
