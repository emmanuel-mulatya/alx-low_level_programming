#include <stdio.h>
/**
 *main - prints main function
 *takes no arguments
 *
 *prints 0 -9 with commas and space
 *
 *Return: 0
 **/

int main(void)
{
	int cm, spc, zero, nine;

	cm = 44;
	spc = 32;
	zero = 48;
	nine = 57;

	do {
		putchar(zero);
		if (zero != 57)
		{
			putchar(cm);
			putchar(spc);
		}
		zero++;
	} while (zero <= nine);

	putchar(10);
	return (0);
}
