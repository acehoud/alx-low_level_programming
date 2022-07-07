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
	va_list argumnts;

	if (n)
	{
		va_start(argumnts, n);
		j = 0;
		while (j < n)
		{
			sum += va_arg(argumnts, int);
			j++;
		}
		va_end(argumnts);
	}
	return (sum);
}
