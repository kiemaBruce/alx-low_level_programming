#include "main.h"

/**
  * _cp - copies the contents of a file to another file.
  * @file_from: the name of the source file.
  * @file_to: the name of the destination file.
  * Return: 0 on success. It returns -1 if either file_from or file_to
  * is equal to NULL, or if malloc fails when allocating memory for the buffer.
  * It returns -2 if the file_from does not exist or it cannot be read from. It
  * returns -3 if file_to cannot be created or if writing to it fails.
  */
int _cp(const char *file_from, const char *file_to)
{
	int sfd, dfd, csfd, cdfd, cr;
	char *buf = NULL;

	if (file_from == NULL || file_to == NULL)
		return (-1);
	errno = 0;
	sfd = open(file_from, O_RDONLY);
	if (errno == ENOENT) /* Source file doesn't exist */
		return (-2);
	dfd = open(file_to, O_WRONLY | O_CREAT | O_EXCL, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (errno == EEXIST) /* File already exists */
		dfd = open(file_to, O_WRONLY | O_TRUNC);
	if (dfd == -1)
		return (-3);
	cr = _cp_helper(sfd, dfd);
	if (cr != 0)
		return (cr);
	csfd = close(sfd);
	cdfd = close(dfd);
	if (csfd == -1 || cdfd == -1)
	{
		free(buf);
		if (csfd == -1)
			return (sfd);
		if (cdfd == -1)
			return (dfd);
	}
	free(buf);
	return (0);
}
/**
  * _cp_helper - copies contents of a file into another file.
  * @sfd: the file descriptor of the source file.
  * @dfd: the file descriptor of the destination file.
  * Description: the function uses a buffer of 1024 bytes to reduce the number
  * of times that the source file is read from. (To reduce the system calls.)
  * Return: 0 on success. It returns -1 if malloc fails, -2 if reading the
  * source file fails and -3 if writing to the destination file fails.
  */
int _cp_helper(int sfd, int dfd)
{
	ssize_t r, w;
	char *buf;

	buf = malloc(1024);
	if (buf == NULL)
		return (-1);
	while (1)
	{
		r = read(sfd, buf, 1024);
		if (r == 0)
			break;
		if (r == -1)/* Free malloc here before returning */
		{
			free(buf);
			return (-2);
		}
		w = write(dfd, buf, r);
		if (w == -1 || w != r)/* Free malloc here before returning */
		{
			free(buf);
			return (-3);
		}
	}
	return (0);
}
/**
  * main - executes _cp.
  * @argc: the nunmber of command line arguments that are passed to the
  * program, including the program name.
  * @argv: an array of char * ( or simply strings). The strings are the command
  * line arguments that are passed to the program.
  * Return: 0 on success. On failure, the program doesn't return any value but
  * instead exits with a code and prints an error on the POSIX standard error.
  */
int main(int argc, char *argv[])
{
	int r;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	r = _cp(argv[1], argv[2]);
	if (r == -2)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(98);
	}
	if (r == -3)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	/* Can't close a file descriptor */
	if (r != 0 && r != -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", r);
		exit(100);
	}
	return (0);
}
