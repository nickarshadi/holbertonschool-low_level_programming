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
int first;
int second;

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
			unsigned concatenate1(unsigned i, unsigned j) {
    			unsigned pow = 10;
    			while(j >= pow)
        		pow *= 10;
    			return i * pow + j;        
			}
			unsigned concatenate2(unsigned k, unsigned n) {
                        unsigned pow = 10;
                        while(n >= pow)
                        pow *= 10;
                        return k * pow + n;
                        }
			if (concatenate1 != concatenate2)
			{
			putchar(i + '0');
			putchar(j + '0');
			putchar(' ');
			putchar(k + '0');
			putchar(n + '0');
			if (i != 9 || j != 8 || k != 9 || n != 9)
			{
			putchar(',');
			putchar(' ');
			}
			}
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
