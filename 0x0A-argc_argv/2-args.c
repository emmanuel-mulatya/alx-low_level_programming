#include <stdio.h>

/**
  *main - prints all arguments it recieves
  *@argc: number of arguments
  *@argv: argument values
  *
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
