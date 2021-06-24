#include <stdio.h>

/**
  *main - this the main function
  *
  *Return: Always zero;
  */

int main(void)
{
	int counter;

	counter = 1;

	while (counter <= 100)
	{
		if (((counter % 3) == 0) && ((counter % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((counter % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((counter % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", counter);
		}
		counter++;
	}
	printf("\n");
	return (0);
}
