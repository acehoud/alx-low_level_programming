#include "main.h"

/**
 * _strspn - function that gets the length
 * of a prefix substring
 * @s: This is the main C string to be scanned
 * @accept: This is the string containing the list of
 * characters to match in s
 * Return: Always return 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int test = 0, i, j;

	for (i = 0;; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] != accept[j])
				continue;
			test++;
			break;

		}
		if (accept[j] == '\0')
			break;
	}

	return (test);
}
