/* header */
#include <stdio.h>
/* main class */
int main(void)
{
	char s[] = "with propper grammar, but the outcome is a piece of art,\n";
	int i;
	
	for(i=0;s[i];i++)
	{
		putc(i);
	}
	return 0;
}
