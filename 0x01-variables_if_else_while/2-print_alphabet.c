#include<stdio.h>
/**
 * main - print
 * Return:0
 */
int main(void)
{
char c = 'a';
int i=0;
while(i<24)
{
	putchar(c);
	c++;
	i++;
}
putchar('\n');
return (0);
}
