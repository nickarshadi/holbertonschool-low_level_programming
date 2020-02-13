#include "holberton.h"
/**
 * print_square - print square with size size
 * Return: no return value
 * @size: print size
 */
void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
				if (b == size - 1)
				{
					_putchar('\n');
				}
			}
		}
	}
}
