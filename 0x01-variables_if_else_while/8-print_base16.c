#include <stdio.h>
/**
 *main - this is the main function
 *takes no argument values
 *
 *prints all numbers of base16
 *
 *Return: 0
 **/

int main(void)
{
	int a, z, zero, nine, nl, i;

	a = 97;
	z = 122;
	zero = 48;
	nine = 57;
	nl = 10;

	for (i = zero; i <= nine; i++)
		putchar(i);

	for (i = a; i <= z; i++)
		putchar(i);

	putchar(nl);
	return (0);
}
