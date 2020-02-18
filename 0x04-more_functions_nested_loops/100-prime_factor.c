#include <stdio.h>
/**
 * main - print all prime numbers
 * Return: 0
 */
int main(void)
{
	long a = 612852475143;
	long b = 0;
	long c = 0;
	long d = 0;

	for (b = 1; b < 152488798; b++)
	{
		d = a % b;
		if (d == 0)
		{
			c = b;
		}
	}
	printf("%ld\n", c);
	return (0);
}
