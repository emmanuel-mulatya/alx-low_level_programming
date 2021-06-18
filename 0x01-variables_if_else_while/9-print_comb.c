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
	int i, j;

	i = j = 48;

	while (i <= 57)
	{
		j = i + 1;

		while (j <= 57)
		{
			putchar(i);
			putchar(j);

			if ((i < 56) || (j < 57))
			{
				putchar(44);
				putchar(32);
			}

			j++;
		}
		i++;
	}

	putchar(10);
	return (0);
}
