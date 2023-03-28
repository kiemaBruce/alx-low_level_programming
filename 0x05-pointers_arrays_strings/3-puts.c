#include "main.h"

void _puts(char *str)
{
	int i, slen;

	slen = _strlen(str);

	for (i = 0; i <= slen; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
