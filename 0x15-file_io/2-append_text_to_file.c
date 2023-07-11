#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file.
  * @filename: name of the file.
  * @text_content: the NULL terminated string to add at the end of the file.
  * Description: if the file doesn't exist then it is not created. And if
  * text_content is NULL, nothing is added to the file.
  * Return: 1 on success and -1 on failure. If text_content is NULL, the
  * function returns 1 if the file exists and -1 if it doesn't or if you do not
  * have the required permissions to write the file.
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;

	if (filename == NULL)
		return (-1);
	errno = 0;
	fd = open(filename, O_WRONLY | O_APPEND);
	/* We don't have correct access permissions on the file */
	if (errno == EACCES) /* && fd == -1 */
		return (-1);
	if (text_content == NULL)
	{
		/* File exists */
		if (errno != ENOENT)
			return (1);
		else if (errno == ENOENT) /* File doesn't exist */
			return (-1);
	}
	w = write(fd, text_content, getlength(text_content));
	if (w == -1 || w != getlength(text_content))
	{
		close(fd);
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
