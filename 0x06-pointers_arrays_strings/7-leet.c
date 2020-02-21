#include "holberton.h"
/**
* *leet - leet speak
*@a: Pointer variable
*Return: a
*/
char *leet(char *a)
{
int i = 0;
int j = 0;
char numbers[] = "43071";
char testarr1[] = "aeotl";
char testarr2[] = "AEOTL";
for (i = 0; a[i]; i++)
{
for (j = 0; testarr1[j] && testarr2[j]; j++)
{
if (a[i] == testarr1[j] || a[i] == testarr2[j])
{
a[i] = numbers[j];
}
}
}
return (a);
}
