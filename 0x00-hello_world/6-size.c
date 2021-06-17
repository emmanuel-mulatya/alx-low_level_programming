#include <stdio.h>

/**
 *main - the main function
 *takes no arguments
 *
 *prints size of char
 *prints size of int
 *prints size of long int
 *prints size of long long int
 *prints size of float
 *prints size of float
 *
 *Return: 0
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("size of long int: %d bytes(s)\n", sizeof(long int));
	printf("Size of long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)", sizeof(float));

	return (0);
}
