#include <stdio.h>
/**
 * main - print function
 * Return:0
 */
int main(void)
{
int i = 0;
int z;

while (i < 10)
{
	putchar(i + '0');
	putchar(',');
	putchar(' ');
	i++;
}
putchar('\n');
return (0);
}
