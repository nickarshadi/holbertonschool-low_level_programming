#include "holberton.h"

/**
 * get_endianness - write a function that checks the endianness;
 *
 * Return: 0 if big ednian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *) & n == 1);
}
