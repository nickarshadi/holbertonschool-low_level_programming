#include "holberton.h"
/**
 * void times_table
 * Return: no return value
 */
void times_table(void)
{
	int x = 0;
	int y = 0;
	int z = 0;
	int a = 0;
	int b = 0;

	while (x <= 9)
	{
		while (y <= 9)
		{
			z = x * y;
			a = z / 10;
			b = z % 10;
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			x++;
			y++;
		}
		y++;
		x++;
	}
}
