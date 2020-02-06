#include <stdio.h>
/**
 * main - print function
 * Return:0
 */
int main(void)
{
int i = 0;
int z = 9;

while (i < 9)
{
	putchar(i + '0');
	putchar(',');
	putchar(' ');
	i++;
}
putchar(z + '0');
return (0);
}
