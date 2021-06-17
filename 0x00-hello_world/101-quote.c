#include <stdio.h>
#include <unistd.h> /*calls system call that write data out of buffer*/

/**
 *main - This is th beginning of the programm
 *it takes no arguments
 *
 *prints a string to stderr
 *
 *Return: 1 error/fail
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}
