#include <stdio.h>
#include <stdlib.h>

/**
  *main - adds positive numbers
  *@argc: arguments count
  *@argv: arguments passed
  *
  *Return: 0 if executed successfully else 1
  */

int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
