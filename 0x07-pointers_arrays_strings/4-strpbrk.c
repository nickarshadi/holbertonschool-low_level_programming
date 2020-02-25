#include "holberton.h"
/**
 * _strpbrk - get adress from first occurence of character
 * @s: string s
 * @accept: searched occurence
 * Return: location of searched character
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
	for (b = 0; accept[b] != '\0'; b++)
	{
		if (s[a] == accept[b])
		{
			return (&s[a]);
		}
	}
	}
	if (accept == '\0')
	{
	return (&s[a]);
	}
	else
	{
	return ('\0');
	}
}
