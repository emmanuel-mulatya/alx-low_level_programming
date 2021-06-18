#include <stdio.h>
/**
*main - this the main function
*it takes no arguments
*
*prints alhabets except q and e
*
*Return: 0
**/

int main(void)
{
	int a, z, nl, e, q;

	a = 97;
	z = 122;
	e = 101;
	q = 113;
	nl = 10;

	do {
		if ((a != e) && (a != q))
		putchar(a);
		a++;
	} while (a <= z);

putchar(nl);
return (0);


}
