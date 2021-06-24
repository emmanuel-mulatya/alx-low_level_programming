#include <stdio.h>

/**
  * main - prints largest prime factor of a number
  *
  *Return: Always 0;
  */

int main(void)
{
	long long prime = 612852475143;
	long long quotient = prime;
	long long divisor = 2;

	while (quotient != divisor)
	{
		if (quotient % divisor == 0)
		{
			quotient /=  divisor;
		}
		else
		{
			divisor++;
		}
	}

		printf("%lli\n", quotient);

		return (0);

}
