#include "holberton.h"
/**
 * more_numbers - print out numbers from 1 to 14 ten times
 * Return: 0
 */
void more_numbers(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			c = b % 10;
			d = b / 10;
			if (b > 9)
			{
				_putchar(d + '0');
			}
			_putchar(c + '0');
			if ( b == 14)
			{
				_putchar('\n');
			}
		}
	}
}
