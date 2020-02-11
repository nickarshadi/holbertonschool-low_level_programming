#include "holberton.h"
/**
 * main - print
 * Return:0
 */
int main(void)
{
	int i = 0;
	char c[10] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\n'};
	while (i < 10)
	{
	_putchar(c[i]);
	i++;
	}
	return (0);
}
