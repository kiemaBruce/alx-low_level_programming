#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int x = 48;
	int y;

	do {
		y = 49;

		do {
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x == 56)
				{
					if (y == 57)
					{
						break;
					}
				}
					putchar(',');
					putchar(' ');
			}
			y++;
		} while (y <= 57);
		x++;
	} while (x <= 56);
	putchar('\n');
	return (0);
}
