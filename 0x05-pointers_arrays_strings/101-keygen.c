#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int n;
	srand(time(NULL));

	n = rand();
	printf("%d\n", n);

	return (0);
}
