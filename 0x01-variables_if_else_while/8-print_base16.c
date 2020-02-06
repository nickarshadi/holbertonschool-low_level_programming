#include <stdio.h>
/**
 * main - print function
 * Return:0
 */
int main(void)
{
int i = 0;
char c = 'a';
while (i < 10)
{
	putchar(i + '0');
	i++;
}
i = 0;
while (i < 6)
{
	putchar(c);
	i++;
	c++;
}
putchar('\n');
return (0);
}
