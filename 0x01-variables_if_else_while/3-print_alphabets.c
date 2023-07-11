#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	while (A < 91)
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
