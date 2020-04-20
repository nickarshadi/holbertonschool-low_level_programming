#include "holberton.h"

/**
 * print_times_table - print the n times table starting with 0
 * @n: times table of n
 */
void print_times_table(int n)
{
	int product = 0, x = 0, y = 0, i, j;

	(void)j;
	if (n >= 0 && n <= 15)
	{
		for (y = 0; y <= n; y++)
		{
			for (x = 0; x <=n; x++)
			{
				product = x * y;
				i = product / 10;
				j = i / 10;
				if (x)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					if (!(i % 10))
						_putchar(' ');
					else
						_putchar(i / 10 + '0');
					if (!(product % 10))
						_putchar(' ');
					else
						_putchar(product / 10 + '0');
				}
				if (!j)
					j = i;
				if (!j)
					j = product;
				_putchar(j + '0');
			}
			_putchar('\n');
		}
	}
}
