#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * um_them_all - function that returns the
 * sum of all its parameters
 * @n: numb of args
 *
 * Return: Always return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int j;
	va_list arg_list;

	var_start(arg_list, n);

	if (n != 0)
	{
		for (j = 0; j < n; j++)
		{
			sum += va_arg(arg_list, int);
		}
	}
	va_end(arg_list);
	return (sum);
}
