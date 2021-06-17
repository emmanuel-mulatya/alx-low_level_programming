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
	printf("Size of a char: %d byte(s)\n", (int)sizeof(char));
	printf("Size of an int: %d byte(s)\n", (int)sizeof(int));
	printf("size of a long int: %d bytes(s)\n", (int)sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(long long int));
	printf("Size of a float:%d byte(s)\n", (int)sizeof(float));

	return (0);
}
