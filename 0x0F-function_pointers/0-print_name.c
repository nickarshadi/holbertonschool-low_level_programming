#include <stdio.h>
/**
 * print_name - print out inserted name
 * @name: name to print
 * @f: function to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == '\0' || f == 0)
	{}
	else
	{
	(*f)(name);
	}
}
