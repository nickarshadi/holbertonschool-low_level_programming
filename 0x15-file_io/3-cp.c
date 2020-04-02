#include "holberton.h"

/**
 * main - Copy the content of a file to another file
 * Usage: cp file_from file_to
 * Return: 0
 */
int main(int ac, char **av)
{
	int fd;
	ssize_t bytes;
	char *buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == (-1))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	}
	bytes = read(fd, &buf[0], 1024);
	printf("%d", fd);
	return (0);
}
