#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
/**
gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-print_binary.c _putchar.c -o b
./b
0
1
1100010
10000000000
10000000001
**/
