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
	char numbers[10], lower[26], upper[26], symbol[8];

	i = random = 0;

	srand((unsigned int)(time(NULL)));

	 numbers = "0123456789";
	lower = "abcdefghijklmnopqrstuvwxyz";
	upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	symbol = "!@#$%^&*?";
	char pass[N];

	random = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if (random == 1)
		{
			pass[i] = numbers[rand() % 10];
			random = rand() % 4;
			printf("%c", pass[i]);
		}
		else if (random == 2)
		{
			pass[i] = symbol[rand() % 8];
			random = rand() % 4;
			printf("%c", pass[i]);
		}
		else if (random == 3)
		{
			pass[i] = upper[rand() % 26];
			random = rand() % 4;
			printf("%c", pass[i]);
		}
		else
		{
			pass[i] = lower[rand() % 26];
			random = rand() % 4;
			printf("%c", pass[i]);
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

