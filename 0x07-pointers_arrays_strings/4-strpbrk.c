#include "main.h"
/**
 * _strpbrk - check the code
 *@s: pointer inside the funtion.
 *@accept: pointer inside the funtion.
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
