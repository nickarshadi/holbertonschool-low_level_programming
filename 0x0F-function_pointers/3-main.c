#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - calc num1 operator num2
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1
 * program prints result followed by newline
 * all numbers stored in int
 * operator none of the 5 print Error exit status 99
 * number arguments wrong error\n exit status 98
 * divide by 0 error exit status 100
 */
int main(int argc, char **argv)
{
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
