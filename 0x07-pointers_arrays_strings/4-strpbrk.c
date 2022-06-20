#include "main.h"

/**
 * _strpbrk - function that searches a string for
 * any of a set of bytes
 * @s: This is the C string to be scanned
 * @accept: This is the C string containing the characters to match
 * Return: Always return 0
 * or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (NULL);
}
