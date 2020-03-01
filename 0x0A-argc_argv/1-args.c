#include "holberton.h"
#include <stdio.h>
/**
 * main - print out the number of passed arguments
 * @argc: amount of passed argument
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
