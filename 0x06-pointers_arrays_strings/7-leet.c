#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: string to encode
 * Return: Always return 0
 */

char *leet(char *str)
{
	int i;
	char lower_letter[] = "aeotl";
	char upper_letter[] = "AEOTL";
	char num[] = "43071";

	for (i = 0; str[i]; i++)
	{
		int j;

		for (j = 0; x < 5; j++)
		{
			if (str[i] != lower_letter[j] && str[i] != upper_letter[j])
				continue;

			str[i] = num[j];
			break;
		}
	}

	return (str);
}
