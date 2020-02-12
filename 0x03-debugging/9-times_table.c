#include "holberton.h"
/**
 * void times_table
 * Return: no return value
 */
void times_table(void)
{
	int x;
	int y;
	int z;
	int a;
	int b;

	while (x <= 9)
	{
		while (y <= 9)
		{
			z = x * y;
			_putchar(z + '0');

			y++;
		}
		x++;
	}
}
