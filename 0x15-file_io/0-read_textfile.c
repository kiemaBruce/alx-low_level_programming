#include "main.h"

/**
  * read_textfile - reads and prints contents of a text file.
  * @filename: name of the file to be printed.
  * @letters: the number of letters it should read and print.
  * Description: the function reads the contents of a file and prints them to
  * the POSIX standard output.
  * Return: the actual number of characters it could read and print. If the
  * file cannot be opened or read, or if filename is NULL, or if write fails
  * or does not write the expected amount of bytes, the function returns 0.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t r, w;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (buf == 0)
		return (0);
	r = read(fd, buf, letters);
	if (r == -1)
		return (0);
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1 || w < r)
		return (0);
	return (r);
}
