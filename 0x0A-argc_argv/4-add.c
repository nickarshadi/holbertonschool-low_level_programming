#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int check(char *s);

/**
 * main - add positive numbers
 * @argc: amount of arguments
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
	for (a = 0; a < argc; a++)
	{
		sum += atoi(argv[a]);
		if (a != 0 && check(argv[a]) == 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
	}
}
/**
 * check - check if string is digit only
 * @s: string which gets checked
 * Return: 1 if found a letter
 */
int check(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}
