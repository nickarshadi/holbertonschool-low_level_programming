
#include "holberton.h"
/**
* *rot13 - a string to rot13 codification
*@a: Pointer variable
*Return: a
*/
char *rot13(char *a)
{
int i = 0;
int j = 0;
char testarr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char testarr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; a[i]; i++)
{
for (j = 0; testarr1[j]; j++)
{
if (a[i] == testarr1[j])
{
a[i] = testarr2[j];
break;
}
}
}
return (a);
}
