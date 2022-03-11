#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - check the code
 *@s: pointer inside the funtion
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len1;

	len1 = 0;
	while (*s != '\0')
	{
		len1++;
		s++;
	}
	return (len1);
}
/**
 * string_nconcat - check the code
 *@s1: pointer to concat
 *@s2: pointer to concat
 *@n: bytes of s2
 * Return: pointer concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	if (n >= size2)
	{
		concat = malloc(sizeof(char) * (size1 + size2 + 1));
		if (concat == NULL)
		{
			free(concat);
			return (NULL);
		}
	}
	else
	{
		concat = malloc(sizeof(char) * (size1 + n + 1));
		if (concat == NULL)
		{
			free(concat);
			return (NULL);
		}
	}
	for (i = 0; i < size1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	concat[i] = '\0';
	return (concat);

}
