#include "holberton.h"
/**
 * times_table - print out whole time table
 * Return: no return type
 */
void times_table(void)
{
int a = 0;
int b = 0;
int c = 0;
int d = 0;
int e = 0;

for (a = 0; a <= 9; a++)
{
	for (b = 0; b <= 9; b++)
	{
		c = a * b;
		if (c > 9)
		{
			d = c / 10;
			e = c % 10;
			_putchar(' ');
			_putchar(d + '0');
			_putchar(e + '0');
		}
		else
		{
			if (b != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(c + '0');

		}
		if (b < 9)
		{
			_putchar(',');
		}
		else
		{
			_putchar('\n');
		}
	}
}

}
