#include "holberton.h"
/**
 * string_toupper - change lowercase to upper
 * @a: parameter
 * Return: char
 */
char *string_toupper(char *a)
{
	int b = 0;

	while (a[b] != '\0')
	{
		if (a[b] >= 'a' && a[b] <= 'z')
		{
			a[b] = a[b] - 32;
		}
		b++;
	}
	return (a);
}
