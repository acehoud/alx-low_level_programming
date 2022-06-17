#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: string to encode
 * Return: Always return 0
 */

char *leet(char *str)
{
	int i;
	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char num[] = "43071";

	for (i = 0; str[i]; i++)
	{
		int j;

		for (j = 0; j < 5; j++)
		{
			if (str[i] != lower[j] && str[i] != upper[j])
				continue;

			str[i] = num[j];
			break;
		}
	}

	return (str);
}
