#include "holberton.h"

/**
 * get_bit - Write a function that returns the value of
 * a bit at a given index
 * @n: unsingend long int n
 * @index: index is the index starting from 0
 * of the bit you want to get
 *
 * Return: the value of the bit at index or -1 if an
 * error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = sizeof(unsigned long int) * 8;

	if (index > max)
	{
		return (-1);
	}
	if (n & (1 << index))
	{
		return (1);
	}
	return (0);

}
