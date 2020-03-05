#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocate memory for array and set all to NULL
 * @nmemb: number of elements
 * @size: amount of bytes per element
 * Return: null or initiialised array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int  *ar;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ar = malloc(nmemb * size);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		ar[a] = 0;
	}
	return (ar);
}
