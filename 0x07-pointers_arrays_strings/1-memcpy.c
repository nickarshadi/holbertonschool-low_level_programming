#include "holberton.h"
/**
 * _memcpy - copy memory area
 * @dest: destination where to copy to
 * @src: source file which gets copied
 * @n: bytes that get copied
 * Return: copied dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
