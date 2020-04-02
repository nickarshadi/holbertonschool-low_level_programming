#include "holberton.h"

/**
 * _strlen - return the length of a string
 * @s: the string whose length to check
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s++)
		n++;
	return (n);
}

/**
 * create_file - Create a function that creates a file
 * @filename: Filename is the name of the file to create
 * @text_content: Text_content is a NULL terminated string
 * to write this file
 * Return: 1 on success, -1 on failure:
 * -file can not be created, file can not be
 * written, write "fails", if the filename is NULL
 * Description:
 * - If the file already exists, truncate it
 * - The created file must have those persmissions : 00600
 * -If the file aleady exists do not change its permissions
 * -If text_content is NULL create an empty file
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IWUSR | S_IRUSR);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
