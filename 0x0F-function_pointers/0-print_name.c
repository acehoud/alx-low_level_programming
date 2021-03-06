#include "function_pointers.h"


/**
 * print_name - function that prints a name
 * @name: name of the person
 * @f: pointer to function
 *
 * Return: Always return 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
