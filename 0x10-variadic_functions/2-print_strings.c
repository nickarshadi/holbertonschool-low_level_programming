#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings followed by a newline
 * @separator: string to seperate strings
 * @n: number of passed strings
 * if separator is NULL dont print
 * if one string is NULL print (nil) instead
 * Print a newline at the end of the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list valist;
	char *temp;

	va_start(valist, n);
	for (a = 0; a < n; a++)
	{
		temp = va_arg(valist, char*);
		if (temp == NULL)
		{
			temp = "(nil)";
		}
		printf("%s", temp);
		if (a < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(valist);
	printf("\n");
}
