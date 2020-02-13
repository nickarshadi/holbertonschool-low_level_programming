#include "holberton.h"
/**
 * print_line - print line
 * Return: no return type
 * @n: parameter
 */
void print_line(int n)
{
	int a = 0;

	if (n >= 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
