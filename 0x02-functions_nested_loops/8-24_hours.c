#include "holberton.h"
/**
 * jack_bauer - count to 24 hours
 * Return: no return type
 *
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (a <= 2)
	{
		b = 0;
		while (b <= 9)
		{
			c = 0;
			while (c <= 5)
			{
				d = 0;
				while (d <= 9)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					if (a == 2 && b == 3 && c == 5 && d == 9)
					{
						a = 10;
						b = 10;
						c = 10;
						d = 11;
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
