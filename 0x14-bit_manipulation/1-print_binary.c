#include "holberton.h"

/**
 * print_binary - Write a function that prints
 * the binary represantation of a number
 * @n: decimal number
 * Description:
 * - You are not allowed to use arrays
 * - You are not allowed to use malloc
 * - You are not allowed to use the % or / operators
 **/
void print_binary(unsigned long int n)
{
	int bits, start = 0;

	bits = sizeof(long int) * 8;
	while (bits)
	{
		if (n & (1uL<<--bits))
		{
			_putchar('1');
			start++;
		}
		else if (start)
		{
			_putchar('0');
		}
	}
	if (!start)
	{
		_putchar('0');
	}
	_putchar('\n');
}
