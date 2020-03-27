#include "holberton.h"

/**
 * flip_bits - Write a function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: src number
 * @m: dest number wou want to achieve through flips
 * Return: number of needed flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = sizeof(unsigned long int) * 8;
	unsigned int counter = 0, a, b;

	while (bits)
	{
		a = (n >> --bits) & 1;
		b = (m >> bits) & 1;
		if (a != b)
		{
			counter++;
		}
	}
	return (counter);
}
