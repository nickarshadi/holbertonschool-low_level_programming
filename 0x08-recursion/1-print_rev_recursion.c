#include "holberton.h"
/**
 * _print_rev_recursion - print string in reverse
 * @s: pointer to string that gets reversed
 * Return: no return
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
