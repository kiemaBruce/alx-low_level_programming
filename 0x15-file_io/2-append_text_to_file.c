#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file.
  * @filename: the file that is to have text appended to its end.
  * @text_content: the text to be appended at the end of the file.
  * Description: if the file does not exist, it is not created. If text_content
  * is NULL nothing is added to the file.
  * Return: 1 on success and -1 on failure. If filename is NULL, -1 is
  * returned. It also returns 1 if the text_content is NULL but the file
  * exists,
  * and -1 if the file does not exist with NULL text_content.
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;
	FILE *fp = NULL;
	size_t slen;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
		slen = _strlen(text_content);
	fp = fopen(filename, "r");
	/* Return -1 if file does not exist */
	if (fp == NULL)
	{
		fclose(fp);
		return (-1);
	}
	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);
	/* Return 1 if file exists and text_content is NULL */
	if (text_content == NULL)
	{
		return (1);
	}
	w = write(fd, text_content, slen);
	if (w == -1)
		return (-1);
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

