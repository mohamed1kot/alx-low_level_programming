#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 *
 * @name : the name you would to print it.
 * @f : is a pointer points to function.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
