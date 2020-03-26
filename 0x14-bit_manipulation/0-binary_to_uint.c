#include "holberton.h"

/**
 * binary_to_uint - Write a function that converts a binary
 * number to an unsigned int.
 * @b: b is pointing to a string of 0 and 1 chars
 *
 * Return: the vonverted number, or 0 if
 * - there id one or more chars in the string b that is not
 * 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0, c = 2, d = 0, sum = 0;

	if (!b)
		return (0);
	for (; *b; b++)
	{
		d++;
	}
	b--;
	while (a < d)
	{
		if (a > 1)
			c *= 2;
		if (*b != '0' && *b != '1')
			return (0);
		if (*b == '1')
		{
			if (a > 1)
			{
			sum = sum + c;
			}
			else if (a == 0)
			{
				sum += 1;
			} else
			{
				sum += 2;
			}
		 /*	printf("%d ", c); */
		}
		a++;
		b--;
	}
	return (sum);
}
