#include <stdio.h>
/**
 *main - this is the main function
 *takes no arguments
 *
 *prints alphabets in reverse order
 *
 *Return: 0
 **/

int main(void)
{
	int i, a, z, nl;

	a = 97;
	z = 122;
	nl = 10;

	for (i = z; i >= a; i--)
		putchar(i);

	putchar(nl);
	return (0);
}
