#include "holberton.h"
/**
 * _strncat - concatenate two strings till n
 * @dest: string1
 * @src: string2
 * @n: parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	for (a = 0; dest[a] != '\0'; a++)
	{}
	for (b = 0; src[b] != '\0'; b++)
	{}
	if (n < b)
	{
	for (c = a; c < a + n; c++)
	{
		dest[c] = src[d];
		d++;
	}
	}
	else
	{
		for (c = a; c < a + b; c++)
		{
			dest[c] = src[d];
			d++;
		}
	}
	if (n >= b)
	{
		dest[c] = '\0';
	}
	return (dest);
}
