#include "holberton.h"

/**
  * jack_bauer - prints time in 24 hours
  *
  *Return: nothing
  */

void jack_bauer(void)
{
	int H, h, M, m, max;

	max = 58;
	H = '0';
	while (H < '3')
	{
		if (H == '2')
		{
			max = '4';
		}
		h = '0';
		while (h < max)
		{
			M = '0';
			while (M < '6')
			{
				m = '0';
				while (m < 58)
			{
					_putchar(H);
					_putchar(h);
					_putchar(':');
					_putchar(M);
					_putchar(m);
					_putchar('\n');
					m++;
				}
				m = '0';
				M++;
			}
			M = '0';
			h++;
		}
		h = '0';
		H++;

	}
}
