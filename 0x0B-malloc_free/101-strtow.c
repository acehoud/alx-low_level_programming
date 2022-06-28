#include "main.h"
#include <stdlib.h>

/**
 * strtow - function that splits a string into words
 * @str: pointer to par
 * Return: Always return 0
 */

char **strtow(char *str)
{
	int i = 0, j = 0, k = 0;
	int siz = 0, tota = 0;
	char **s, *t;

	if (!str || !*str)
		return (NULL);

	while (*(str + i))
	{
		if (*(str + i) != ' ')
		{
			if (*(str + i + 1) == ' ' || *(str + i + 1) == 0)
				tota += 1;
		}
		i++;
	}

	if (tota == 0)
		return (NULL);
	tota += 1;
	s = malloc(sizeof(char *) * tota);

	if (!s)
		return (NULL);
	i = 0;

	while (*str)
	{
		while (*str == ' ' && *str)
		{
			str++;
		}
		siz = 0;
		while (*(str + siz) != ' ' && *(str + siz))
		{
			siz += 1;
		}
		siz += 1;
		t = malloc(sizeof(char) * siz);

		if (!t)
		{
			for (k = j -1; k >= 0; k--)
			{
				free(s[k]);
			}
			free(s);
			return (NULL);
		}

		for (k = 0; k < (siz - 1); k++)
		{
			*(t + k) = *(str++);
		}
		*(t + k) = '\0';
		*(s + j) = t;

		if (j < (tota - 1))
			j++;
	}
	*(s + j) = NULL;
	return (s);
}
