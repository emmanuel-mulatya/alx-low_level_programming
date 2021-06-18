#include <stdio.h>
/**
 *main - this is the main function
 *takes no arguments
 *
 *prints all lowercase alphabets
 *
 *Return: 0
 **/

int main(void)
{
	int alp, next;

	alp = 97;
	next = 10;

	while (alp <= 122)
	{
		putchar(alp);
		alp++;
	}
	putchar(next);
	return (0);
}
