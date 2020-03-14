#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct Struktur - opt strukturen
 * @form: The operator
 * @f: The function associated
 * Description: Struktur zum arbeiten
 */
typedef struct Struktur
{
	char *form;
	void (*f)(va_list valist);
} strukturen;

void pchar(va_list valist);
void pint(va_list valist);
void pfloat(va_list valist);
void pstring(va_list valist);

#endif
