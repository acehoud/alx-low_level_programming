#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: This is the C string to be scanned
 * @c: This is the character to be searched in str
 * Return: Always return 0
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
	}

	return (0);
}
