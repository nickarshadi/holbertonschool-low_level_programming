#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 0;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    clear_bit(&n, 1);
    printf("%lu\n", n);
    return (0);
}
/*
gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-clear_bit.c -o e
./e
0
0
96
*/
