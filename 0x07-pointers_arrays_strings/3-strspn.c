#include "main.h"

/**
 * _strspn - check the code
 *@s: pointer inside the funtion.
 *@accept: pointer inside the funtion.
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}

		if (s[i] != accept[j])
		{
			return (n);
		}
	}
	return (n);
}
