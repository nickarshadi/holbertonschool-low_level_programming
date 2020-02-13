#include "holberton.h"
/**
 * print_diagonal - print diagonal line with size n
 * Return: 0
 * @n: parameter n
 */
void print_diagonal(int n)
{
	int a = 0;
	int b = 0;
	int c = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
		for (b = 0; b <= c; b++)
		{
			_putchar(' ');
		}
		c++;
		_putchar('\\');
		_putchar('\n');
	}
	}
}
