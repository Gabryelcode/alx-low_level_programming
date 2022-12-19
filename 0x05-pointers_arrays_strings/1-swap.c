/**
 * swap_int - swaps the value of variable 'a' and 'b'
 * @a: pointer to 'a' variable
 * @b: pointer to 'b' variable
 */
void swap_int(int *a, int *b)
{
	int a1;

	a1 = *b;
	*b = *a;
	*a = a1;
}
