#include <stdio.h>
/**
 * main - print function
 * Return:0
 */
int main(void)
{
int i = 00;
while (i <= 99)
{
	putchar(i / 10 + '0');
	putchar(i % 10 + '0');
	i++;
	if (i !=100)
	{
	putchar(',');
	putchar(' ');
	}
}
putchar('\n');
return (0);
}
