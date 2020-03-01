#include "holberton.h"
#include <stdio.h>
/**
 * main - print out all arguments that are received
 * @argv: array of strings
 * @argc: numbers of arguments stored in string
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a = 0;

	for (a = 0; argv[a] != '\0'; a++)
	{
		printf("%s\n", argv[a]);
	}
	(void)argc;
	return (0);
}
