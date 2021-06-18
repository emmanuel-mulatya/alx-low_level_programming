#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is the main class
 * it takes no arguments
 *
 * generates a random int n
 *evaluates if n is greater than 5 or is zero or less than 6 and not zero
 *
 *Return: 0
 **/

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
		printf("Last digit of %d is %d and is great than 5", n, last_digit);
	else if ((last_digit < 6) && (last_digit != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);
	else
		printf("The last digit of %d is 0 and is 0");

	return (0);
}
