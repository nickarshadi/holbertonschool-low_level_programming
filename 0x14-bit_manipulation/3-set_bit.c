#include "holberton.h"

/**
 * set_bit - Set the value of a bit to 1 at a given index
 * @n: unsigned long int
 * @index: index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = sizeof(unsigned long int) * 8;

	if (index > max)
	{
		return (-1);
	}
	*n = *n | (1ul << index);
	return (1);
}
