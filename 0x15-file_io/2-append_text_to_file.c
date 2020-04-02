#include "holberton.h"

/**
 * _strlen - get length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - Write a function that appends text at \
 the end of a file
 * @filename: filename is the name of the file
 * @text_content: NULL terminated string to add.
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == (-1))
		return (-1);
	write(fd, text_content, len);
	close(fd);
	return (1);
}
