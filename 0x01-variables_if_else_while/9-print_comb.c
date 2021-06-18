#include <stdio.h>

/**
 *main - this is the main function
 *it takes no arguments
 *
 *prints double characters with commas and spaces
 *
 *Return: o
 **/

int main(void)
{
	/* 0 = 48, 9 = 57, comma = 44, comma = 32, space = 32, nextline = 10 */
	int i;

	i = 48;

		while (i <= 57)
		{
			putchar(i);

			if ((i < 57))
			{
				putchar(44);
				putchar(32);
			}

			i++;
	}

	putchar(10);
	return (0);
}
