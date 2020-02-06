#include <stdio.h>
/**
 * main - print the alphabet except q and e
 * Return:0
 */
int main(void)
{
int i = 0;
char c = 'a';
while (i <= 25)
{
	if (c != 'q')
	{ if
	(c != 'e')
	{
	putchar(c);
	}
	}
	i++;
	c++;
}
putchar('\n');
return (0);
}
