#include "main.h"

/**
 * _strstr -  function that locates a substring
 * @haystack: string to search
 * @needle: string to search for
 * Return: Always return 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		int j;

		for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
		{
			if (haystack[j] != needle[j - i])
				break;
		}

		if (needle[j - i] == '\0')
			return (haystack + i);
	}

	return (0);
}
