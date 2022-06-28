#include "main.h"
#include <stdlib.h>
/**
 * word_count - function
 * @x: string to count
 * Return: Always return 0
 */

int word_count(char *x)
{
	int i, n = 0;

	for (i = 0; x[i]; i++)
	{
		if (x[i] == ' ')
		{
			if (x[i + 1] != ' ' && x[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - function that splits a string into words
 * @str: pointer to par
 * Return: Always return 0
 */

char **strtow(char *str)
{
	int i, j, k, l, num = 0, count = 0;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);
	num = word_count(str);
	if (num == 1)
		return (NULL);
	s = (char **)malloc(num * sizeof(char *));
	if (s == NULL)
		return (NULL);
	s[numb - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			s[count] = (char *)malloc(j * sizeof(char));
			j--;
			if(s[count] == NULL)
			{
				for (k = 0; k < count; k++)
					free(s[k]);
				free(s[num - 1]);
				free(s);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				s[count][l] = str[i + l];
			s[count][l] = '\0';
			count++;
			i += j;
		}
		else
			i++;
	}
	return (s);
}
