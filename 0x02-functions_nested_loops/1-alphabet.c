#include "holberton.h"
/**
 * main - print
 * Return: nothing
 */
void print_alphabet(void)
{
	int a = 0;
	char b = 'a';

	while (a < 26)
	{
		_putchar(b);
		b++;
		a++;
	}
	_putchar('\n');
}
