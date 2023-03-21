#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int a, b;

	for (a = 0; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (a == 98 && b == 99)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
