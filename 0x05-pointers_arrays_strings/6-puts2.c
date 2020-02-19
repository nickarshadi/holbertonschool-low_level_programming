#include "holberton.h"
/**
 * puts2 - print every second character of string
 * @str: parameter string
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 != 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
