#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  function that returns a pointer
 * to a newly allocated space in memory
 * which contains a copy of the string
 * @str: string to be copied
 * Return: Always return 0
 */

char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == 0)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	s = (char *)malloc(sizeof(char) * (i + 1));

	if (s == 0)
		return (0);

	for (j = 0; j <= i; j++)
	{
		s[j] = str[j];
	}

	return (s);
}
