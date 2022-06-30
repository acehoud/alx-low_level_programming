#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - string length
 * @s: string
 * Return: Always return 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

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
	unsigned int size1, size2
	unsigned int i, I;
	char nul = '\0';
	int sst;

	if (s1 == NULL)
		S1 = &nul;

	if (s2 == NULL)
		S2 = &null;

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	if (n >= size2)
		sst = size2 + size1;
	else
		sst = size1 + n;

	p = malloc(sst + 1);
	if (p == NULL)
		return (NULL);

	i = 0, I = 0;
	while (s1[i] != '\0')
		p[I++] = s1[i++];
	i = 0;
	while (s2[i] != '\0' && n-- != 0)
                p[I++] = s2[i++];
	p[I] = '\0';

	return (p);
}
