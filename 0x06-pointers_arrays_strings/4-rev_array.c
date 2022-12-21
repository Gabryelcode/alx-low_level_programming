#include <stdio.h>
/**
 * reverse_array - reverses the contents of an array
 * @a: receives the array
 * @n: receives the element of the array a
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i < n && i >= 0)
	{
		printf("%d", a[i]);
		if (i != 0)
			printf(", ");
		i--;
	}
	printf("\n");
}
