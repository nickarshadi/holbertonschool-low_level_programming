#include <stdio.h>
/**
 * main - print function
 * Return:0
 */
int main(void)
{
int i = 0;
int z = 9;

while (i < 10)
{
	putchar(i + '0');
	if (i != 9)
	{
	putchar(',');
	putchar(' ');
	}
	i++;
}
putchar('\n');
return (0);
}
