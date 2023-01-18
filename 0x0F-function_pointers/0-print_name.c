/**
 * print_name - function to print name containing a pointer to a function
 * as argument
 * @name: recieves a string
 * @f: function pointer that doesn't return anything
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*)(name);
}
