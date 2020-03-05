#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array and initialize it with c
 * @size: Size of Array
 * @c: character to fill grids
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(sizeof(char) * size);
	if (ar == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(ar + i) = c;
	}
	*(ar + i) = '\0';
	return (ar);
}
