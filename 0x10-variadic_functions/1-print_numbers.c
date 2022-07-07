#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: Always return 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lis;
	unsigned int j;

	va_start(lis, n);
	for (j = 0; j < n; j++)
	{
		if (j != (n - 1) && separator != NULL)
		{
			printf("%d%s", va_arg(lis, unsigned int), separator);
		}
		else
		{
			printf("%d", va_arg(lis, unsigned int));
		}
	}
	printf("\n");
	va_end(lis);
}
