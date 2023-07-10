#include "main.h"

/**
  * create_file - creates a file.
  * @filename: name of the file that is to be created.
  * @text_content: a NULL terminated string to write to the file.
  * Description: the created file has permissions rw-------. If the file
  * already exists, its permissions aren't changed. If the file already exists,
  * it is truncated.
  * Return: 1 on success. If file cannot be created or opened, or if
  * text_content cannot be written into the file, then the function returns -1.
  */
int create_file(const char *filename, char *text_content)
{
	int fd, errno;
	ssize_t w;

	if (filename == NULL)
		return (-1);
	/*
	 * Always remember to set errno to 0 before using it so that any changes
	 * to it's value are distinct. E.g, to ensure any previous values are
	 * cleared.
	 */
	errno = w = 0;
	/* if file doesn't exist, create with appropriate permissions */
	fd = open(filename, O_WRONLY | O_CREAT | O_EXCL, S_IRUSR | S_IWUSR);
	/*If the file already exists, errno will have been set to EEXIST */
	/* Truncate it if it already exists */
	if (errno == EEXIST)
		fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		w = write(fd, text_content, getlength(text_content) + 1);
		/**
		 *Second condition means that we weren't able to write as much
		 * as we would have expected to.
		 */
		if (w == -1 || w != (getlength(text_content) + 1))
			return (-1);
	}
	close(fd);
	return (1);
}
/**
 * getlength - returns the length of a string.
 * @s: the string whose length is to be determined.
 * Return: the length.
 */
int getlength(char *s)
{
	int l;

	l = 0;

	while (s[l])
		l++;
	return (l);
}
