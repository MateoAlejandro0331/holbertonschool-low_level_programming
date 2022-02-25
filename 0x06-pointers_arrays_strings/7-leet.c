#include "main.h"

/**
 * leet - check the code for
 *@s: pointer inside the funtion.
 * Return: Always 0.
 */

char *leet(char *s)
{
	int i, j;
	char abc[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; abc[j]; j++)
		{
			if (s[i] == abc[j])
			{
				s[i] = num[j];
			}
		}
	}
	return (s);
}
