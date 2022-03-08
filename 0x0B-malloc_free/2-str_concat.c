#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, x, z = 0;
	char *str;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i]; i++)
			;
		i++;
		for (j = 0; s1[j]; j++)
			;
		j++;

		str = malloc(sizeof(char) * (i + j));
		if (!str)
			return (NULL);
		for (x = 0; x < (i - 1); x++)
		{
			str[x] = s1[x];
		}
		for (; x < (i + j); x++)
		{
			str[x] = s2[z];
			z++;
		}
	}
	return (str);
}
