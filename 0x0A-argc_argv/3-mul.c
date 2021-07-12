#include <stdio.h>
#include <stdlib.h>

/**
  *main - multiplies two numbers
  *@argc: number of arguments
  *@argv: arguments passed;
  *
  *Return: 0 if executed succesfully else 1
  */

int main(int argc, char *argv[])
{
	int a, b;
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		mult = a * b;

		printf("%d\n", mult);
		return (0);
	}
}
