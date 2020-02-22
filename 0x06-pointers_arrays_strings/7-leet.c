#include "holberton.h"
/**
 * *leet - encode string to 1337
 * @dest: string
 * Return: char
 */
char *leet(char *dest)
{
	char al[] = "aAeEoOtTlL";
	char code[] = "4433007711";
	int a = 0;
	int b = 0;

	for (a = 0; dest[a] != '\0'; a++)
	{
		for (b = 0; b <= 10; b++)
		{
			if (dest[a] == al[b])
			{
				dest[a] = code[b];
			}
		}
	}
	return (dest);
}
