#include "main.h"

/**
  * read_textfile - reads a text file, prints it to the POSIX standard output.
  * @filename: the name of the file to be read.
  * @letters: the number of bytes of filename to be read.
  * Return: the actual number of letters that were read and printed.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/*FILE *file = NULL;*/
	char *buf = NULL;
	signed long int x;
	int putsret, fd;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDWR);
	/*fd = open(filename, O_RDONLY);*/
	if (fd == -1)
	{
		return (0);
	}
	file = fopen(filename, O_RDONLY);
	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
	{
		return (0);
	}
	x = read(fd, buf, letters);
	if (x == -1)
	{
		return (0);
	}
	putsret = _puts(buf);
	free(buf);
	if (putsret == -1)
	{
		return (0);
	}
	return (x);
}
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the string to be printed
 * Return: 1 on success, -1 on error.
 */
int _puts(char *str)
{
	int i, slen, r;

	slen = _strlen(str);

	for (i = 0; i < slen; i++)
	{
		r = _putchar(str[i]);
		if (r == -1)
			return (-1);
	}
	/*r = _putchar('\n');*/
	return (r);
}
/**
 * _strlen - returns the length of a string
 * @s: the string whose length is to be determined
 * Return: the string length as an integer
 */
int _strlen(char *s)
{
	int size, i;

	size = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		size++;
	}
	return (size);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
