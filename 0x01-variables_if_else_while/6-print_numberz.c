#include <stdio.h>
/**
 * main - print function
 * Return:0
 */
int main(void)
{
int i = 0;
while (i < 10)
{
	putchar(i + '0');
	i++;
}
putchar('\n');
return (0);
}
