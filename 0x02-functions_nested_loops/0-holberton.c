#include "_putchar.c"
/**
 *main - the main function
 *
 *Return: 0
 **/
int main(void)
{
	char s[] = "Holberton";
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(10);

	return (0);
}
