#include "holberton.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Return: no return
 */
void print_alphabet_x10(void)
{
	int a = 0;
	int b = 0;
	char c = 'a';

	while (b < 10)
	{
	a = 0;
	c = 'a';
	while (a < 26)
	{
		_putchar(c);
		c++;
		a++;
	}
	_putchar('\n');
	b++;
	}
}
