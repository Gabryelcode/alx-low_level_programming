#include <stdio.h>

void _putchar(int x)
{
	printf("%c", x);
}

/*My second function*/
void print_alphabet(void)
{
	char x;
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}	
}
