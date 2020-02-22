#include "holberton.h"
/**
 * cap_string - uppercase all words
 * @s: string
 * Return: char
 */
char *cap_string(char *s)
{
	int a = 0;
	int b = 0;
	char sep[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] = s[0] - 32;
	}
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 14; b++)
		{
		if (s[a] == sep[b])
		{
			if (s[a + 1] >= 97 && s[a + 1] <= 122)
			s[a + 1] = s[a + 1] - 32;
		}
		}
	}
	return (s);
}
