#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the string
 * @s2: string to concates
 * @n: index
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int fsize = 0, lsize = 0, i;

	if (s1 == NULL)
		S1 = "";

	if (s2 == NULL)
		s2 = "";
	
	while (s1[fsize] != '\0')
	{
		fsize++;
	}

	while (s2[lsize] != '\0')
	{
		lsize++;
	}

	if (n > lsize)
	{
	}
	n = lsize;
	p = malloc((fsize + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (i = 0; i < fsize; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (fsize + n); i++)
	{
		p[i] = s2[i - fsize];
	}
	p[i] = '\0';

return (p);
}
