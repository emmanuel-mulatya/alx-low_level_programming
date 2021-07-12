#include <stdio.h>

/**
  *main - prints number of arguments passed to program
  *@argc:number of arguments
  *@argv:arguments passed to program
  *
  *Return: 0
  */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
