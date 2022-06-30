#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the string
 * @s2: string to concates
 * @n: index
 * Return: always return 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int len_size1 = 0, len_size2 = 0, i;

	if (s1 == NULL)
		S1 = " ";

	if (s2 == NULL)
		s2 = " ";

	while (s1[len_size1] != '\0')
	{
		len_size1++;
	}

	while (s2[len_size2] != '\0')
	{
		len_size2++;
	}

	if (n > len_size2)
		n = len_size2;
	a = malloc((len_size1 + 1 + n) * sizeof(char));

	if (a == NULL)
		return (0);

	for (i = 0; i < len_size1; i++)
	{
		a[i] = len_size1[i];
	}

	for (; i < (len_size1 + n) i++)
	{
		a[i] = len_size2[i - len_size1];
	}
	a[i] = '\0';

	return (a);
}
