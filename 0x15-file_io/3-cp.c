#include "main.h"

/**
  * cp - copies the content of a file to another file.
  * @source: the name of the source file.
  * @dest: the name of the destination file.
  * Description: if dest exists,it is truncated. The created file has
  * permissions rw-rw-r-- and if the file already exists its permissions are
  * not modified. The function uses a buffer of 1024 bytes from source to
  * minimize system calls.
  * Return: -2 if source  does not exist, or if you can not read it. -3 if
  * create or write to dest fails. Returns the value of a file descriptor if it
  * cannot be closed. Otherwise, it returns 1 on success.
  */
int cp(const char *source, const char *dest)
{
	int sfd, dfd, c, k, r, w;
	FILE *src = NULL, *dst = NULL;
	char *buff = NULL;

	src = fopen(source, "r");
	if (src == NULL)
		return (-2);
	sfd = open(source, O_RDONLY);
	if (sfd == -1)
		return (-2);
	dst = fopen(dest, "r");
	if (dst == NULL)
		dfd = open(dest, O_RDWR | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR | S_IRGRP
				| S_IWGRP | S_IROTH);
	else
		dfd = open(dest, O_RDWR | O_TRUNC | O_APPEND);
	if (dfd == -1)
		return (-3);
	while (r != 0)
	{
		buff = malloc(1024);
		if (buff == NULL)
			return (-4);
		r = (int)read(sfd, buff, 1024);
		if (r == 0)
			break;
		if (r == -1)
			return (-2);
		w = (int)write(dfd, buff, r);
		if (w == -1)
			return (-3);
		free(buff);
	}
	c = close(sfd);
	if (c == -1)
		return (sfd);
	k = close(dfd);
	if (k == -1)
		return (dfd);
	return (1);
}
/**
  * main - executes the function that copies one file's contents into another.
  * @ac: the number of string arguments that are passed into the function.
  * @av: pointer to an array of strings, which are the arguments that are
  * passed into the function.
  * Description: if the number of arguments is not the correct one, the program
  * exits with code 97. If the source file does not exists or if it can't be
  * read, the program exits with code 98. If the destination file cannot be
  * created or written into, the program exits with code 99. If a file
  * descriptor cannot be closed it exits with code 100. For each case, the
  * appropriate error message is printed on the POSIX standard error.
  * Return: 0 on success.
  */
int main(int ac, char **av)
{
	int x;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	x = cp(av[1], av[2]);
	if (x == -2)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (x == -3)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (x > 0 && x != 1)
	{
		dprintf(2, "Error: Can't close fd %d\n", x);
		exit(100);
	}
	return (0);
}
