#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - print every letter that you get
 * @format: type of incoming variables
 */
void print_all(const char * const format, ...)
{
	struct1 op[] = {
	{"c", pchar},
	{"i", pint},
	{"f", pfloat},
	{"s", pstring},
	{NULL, NULL}
	};
	va_list valist;
	unsigned int a = 0;
	unsigned int b = 0;
	char *empty = "";

	va_start(valist, format);
	while (format != NULL && format[a] != '\0')
	{
		b = 0;
		while (op[b].form != NULL)
		{
			if (format[a] == op[b].form[0])
			{
				printf("%s", empty);
				op[b].f(valist);
				empty = ",";
			}
			b++;
		}
		a++;
	}
	va_end(valist);
	printf("\n");
}
/**
 * pchar - print char
 * @valist: variadic list
 */
void pchar(va_list valist)
{
	printf("%c", va_arg(valist, int));
}
/**
 * pint - print integer
 * @valist: variadic list
 */
void pint(va_list valist)
{
	printf("%d", va_arg(valist, int));
}
/**
 * pfloat - print out float
 * @valist: variadic list
 */
void pfloat(va_list valist)
{
	printf("%f", va_arg(valist, double));
}
/**
 * pstring - print string
 * @valist: variadic list
 */
void pstring(va_list valist)
{
	char *s = va_arg(valist, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
