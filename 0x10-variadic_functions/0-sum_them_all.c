#include "variadic_functions"
#include <stdarg.h>

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
	va_list arguments;

	if (n)
	{
		va_start(arguments, n);
		for (j = 0; j < n; j++)
		{
			sum += va_arg(arguments, int);
		}
		va_end(argumnts);
	}
	return (sum);
}
