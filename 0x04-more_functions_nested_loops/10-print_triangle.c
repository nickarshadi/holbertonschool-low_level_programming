#include "holberton.h"
/**
 * print_triangle - print a triangle with size triangle
 * Return: no return value
 * @size: parametaer that defines the size of triangle
 *
 */
void print_triangle(int size)
{
	int a; /*y-achse*/
	int b; /*x*/
	int c = size; /*length till #*/
	/*/int d = 0;   d */
	int e;    /*anzahl #*/
	int f;   /*letzte schleife*/

	if (size != 0)
	{
	for (a = 0; a < size; a++)
	{
		c--;
		for (b = 0; b < c; b++)
		{
			_putchar(' ');
		}
		e = size - c;
		for (f = 0; f < e; f++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}

}
