#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers and print out
 * @argc: number of args
 * @argv: numbers
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n",c);
	return (0);
}
