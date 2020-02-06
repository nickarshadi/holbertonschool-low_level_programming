#include<stdio.h>
/**
 * main - print
 * Return:0
 */
int main(void)
{
char c = 'a';
int i = 0;
while (c == 'a' || c == 'A')
{
while (i < 25)
{
	putchar(c);
	c++;
	i++;
}
i = 0;
if (c == 'z')
{
c = 'A';
}
}
putchar('\n');
return (0);
}
