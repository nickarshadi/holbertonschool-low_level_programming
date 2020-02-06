#include<stdio.h>
/**
 * main - print
 * Return:0
 */
int main(void)
{
char c = 'z';
int i = 25;
while (i >= 0)
{
	putchar(c);
	c--;
	i--;
}
putchar('\n');
return (0);
}
