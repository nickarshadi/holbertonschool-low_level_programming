#include <stdio.h>
/**
 * main - print function
 * Return:0
 */
int main(void)
{
int i = 0;
int j = 0;
int k = 0;
int n = 0;

while (i <= 9)
{
	j = 0;
	while (j < 10)
	{
		k = 0;
		while (k < 10)
		{
			n = 0;
			while (n < 10)
			{
			putchar(i + '0');
			putchar(j + '0');
			putchar(' ');
			putchar(k + '0');
			putchar(n + '0');
			putchar(',');
			putchar(' ');
			n++;
			}
		k++;
		}
		j++;
	}
	i++;
}
putchar('\n');
return (0);
}
