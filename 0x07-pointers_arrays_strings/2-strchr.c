#include "holberton.h"
/**
 * _strchr - locate a character n a string
 * @s: string
 * @c: searched character
 * Return: location of searched character
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
	if (s[x] == c)
	return (&s[x]);
	}
	return ('\0');
}
