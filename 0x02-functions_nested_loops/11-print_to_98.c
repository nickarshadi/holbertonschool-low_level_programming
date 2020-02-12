#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - print all
 * Return: no value
 * @n: variable
 */
void print_to_98(int n)
{

	while (n <= 98)
	{       if (n == 98)
		{
		printf("%d \n ", n);
		}
		else
		{
		printf("%d, ", n);
		}
		n++;
	}
}
