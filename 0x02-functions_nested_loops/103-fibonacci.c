
#include <stdio.h>
/**
  *main - this is the main class
  *
  *Return: Always 0
  */

int main(void)
{
	long int c, fc, sc, sum;
	int n;

	n = 0;
	fc = 0;
	sc = 1;
	c = 0;


	while (n < 49)
	{
		sum = 0;
		c = fc + sc;
		if (c < 4000000)
		{
			sum += c;

		}
		fc = sc;
		sc = c;

		n++;
	}
	c = fc + sc;
	printf("%li\n", c);

	return (0);




}
