#include <stdio.h>
/**
  *main - this is the main class
  *
  *Return: Always 0
  */

int main(void)
{
	long int c, fc, sc, sum;

	sum = 0;
	fc = 0;
	sc = 1;
	c = 0;


	while (c < 4000000)
	{
		c = fc + sc;
		if (c % 2 == 0)
		{
			sum += c;
		}
		fc = sc;
		sc = c;
	}
	printf("%li\n", sum);

	return (0);




}
