#include "main.h"

/**
  * create_file - creates a file.
  * @filename: the name of the file to be created.
  * @text_content: a NULL terminated string to be written to the file.
  * Description: if the file already exists it is truncated. If text_content is
  * NULL, an empty file is created. The created file has the
  * permissions: rw-------. If the file already exists, the permissions aren't
  * changed.
  * Return: 1 on success and -1 on failure (if the file cannot be created, or
  * written) or if filename is NULL.
  */
int create_file(const char *filename, char *text_content)
{
	int fd, slen;
	FILE *file = NULL;
	ssize_t w;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		slen = _strlen(text_content);
	} else
	{
		slen = -2;
	}
	file = fopen(filename, "r");
	if (file == NULL)
	{
		fd = open(filename, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR);
		/*fd = open(filename, O_CREAT | O_RDWR, 00700);*/
	} else
	{
		fd = open(filename, O_TRUNC | O_RDWR);
		/*fd = open(filename, O_TRUNC);*/
	}
	if (fd == -1)
		return (-1);
	if (slen >= 0)
		w = write(fd, text_content, slen);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
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

