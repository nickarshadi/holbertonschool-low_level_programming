#include <stdio.h>
/**
 * main - print the sizes
 * Return:0
 */
int main(void)
{
	int schar;
	int sint;
	int slongint;
	int sfloat;

	schar = sizeof(char);
	sint = sizeof(int);
	slongint = sizeof(long int);
	sfloat = sizeof(float);

	printf("Size of a char: %d byte(s)\n", schar);
	printf("Size of an int: %d byte(s)\n", sint);
	printf("Size of a long int: %d byte(s)\n", slongint);
	printf("Size of a float: %d byte(s)\n", sfloat);

	return (0);
}
