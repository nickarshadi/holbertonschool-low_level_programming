#include "holberton.h"

/**
 * read_textfile - Write a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: the filename of the file in our OS
 * @letters: The number of letters that should be read and
 * printed.
 * Return: Return the actual number of letters it could
 * read and print
 * - if filename is NULL return 0
 * - if write fails or does not write the expected amount
 * of bytes return 0
 * - if the file can not be opened or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buf[1024 * 0xa];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == (-1))
		return (0);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fd);
	return (bytes);
}
