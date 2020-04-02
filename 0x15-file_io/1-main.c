#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = create_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
/**
gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-create_file.c -o b
./b hello world
-> 1)
ls -l hello
-rw------- 1 julien julien 5 Dec  3 14:28 hello
cat hello
world
*/
