#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum all int arguments
 * @n: number of arguments
 * Return: return the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a, sum;
	va_list valist;

	sum = 0;
	va_start(valist, n); /* initialize valist for n number of arguments*/
	for (a = 0; a < n; a++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
