#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - create new array with new size and put array in
 * @ptr: the pointer to array we want to reallocate
 * @old_size: first pointer size
 * @new_size: new pointer size
 * Return: pointer to new array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int b;
	void *ar;

	if (ptr == NULL)
	{
		ar = malloc(new_size);
		return (ar);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return NULL;
	}
	ar = malloc(new_size);
	if (ar == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		b = old_size;
	}
	else
	{
		b = new_size;
	}
	copy(ar, ptr, b);
	free(ptr);
	return (ar);
}
/**
 * copy - copy one array in another
 * @dest: desgination
 * @src: source
 * @n: integer n
 * Return: return copied array
 */
char *copy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
