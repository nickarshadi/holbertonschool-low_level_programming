#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two integers
 * @argc: number of passed arguments
 * @argv: string of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);
	return (0);

}
