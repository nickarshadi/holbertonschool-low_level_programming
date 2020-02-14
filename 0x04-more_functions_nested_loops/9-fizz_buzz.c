#include "holberton.h"
#include <stdio.h>
/**
 * main - Fizzbuz
 * Return:0
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 1;

	printf("%d", d);

	for (a = 2; a <= 100; a++)
	{
		b = a % 3;
		c = a % 5;

		if (b == 0)
		{
			if (c == 0)
			{
				printf(" FizzBuzz");
			}
			else
			{
				printf(" Fizz");
			}
		}
		else if (c == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", a);
		}
	}
	putchar('\n');
return (0);
}
