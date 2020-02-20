#include "holberton.h"
/**
 * _strcat - concatenate two strings
 * @dest: string1
 * @src: string2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{}
	for (c = a; c <= a + b; c++)
	{
		dest[c] = src[d];
		d++;
	}
	dest[c] = '\0';
	return (dest);
}
