#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char x;
	char A;

	for (x = 48 ; x < 58 ; x++)
	{
		putchar(x);
	}
	for (A = 'a' ; A < 'g' ; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
