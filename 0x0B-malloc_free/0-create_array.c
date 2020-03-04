#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array with size c
 * @size: size of string
 * @c: initializing char
 * Return: the allocatet array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		*(s + a) = c;
	}
	*(s + a) = '\0';
	return (s);
}
