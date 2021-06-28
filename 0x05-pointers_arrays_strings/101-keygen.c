#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  *randomPass - prints random password
  *@N:length of password
  *Return: nothing
  */


void randomPass( int N)
{
	int i ;
	int random;

	i = random = 0;

	srand((unsigned int)(time(NULL)));

	char numbers[] = "0123456789";
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbol[] = "!@#$%^&*?";
	char password[N];

	random = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if (random == 1)
		{
			password[i] = numbers[rand() % 10];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 2)
		{
			password[i] = symbol[rand() % 8];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 3)
		{
			password[i] = upper[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = lower[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
	}
	putchar(10);
}

int main(void)
{
	int N = 10;

	randomPass(N);
	return (0);
}

