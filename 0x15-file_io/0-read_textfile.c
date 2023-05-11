#include "main.h"

/**
  * read_textfile - reads a text file, prints it to the POSIX standard output.
  * @filename: the name of the file to be read.
  * @letters: the number of bytes of filename to be read.
  * Return: the actual number of letters that were read and printed. If
  * filename if NULL, it returns 0. If the file cannot be opened or read, it
  * returns 0. If write fails or does not write the expected number of bytes,
  * it returns 0.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = NULL;
	ssize_t x, w;
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);
	x = read(fd, buf, letters);
	if (x == -1)
		return (0);
	w = write(STDOUT_FILENO, buf, x);
	if (w == -1)
		return (0);
	free(buf);
	close(fd);
	return (x);
}
