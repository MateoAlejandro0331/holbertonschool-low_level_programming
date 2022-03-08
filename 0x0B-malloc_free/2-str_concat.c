#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code
 * @s1: frist string to concat
 * @s2: second string to concat
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
        int i, j, x, z = 0;
	char *str;

	if (s1 == NULL && s2 == NULL)
	{
		return (0);
	}
	else
	{
		if (s2 == NULL)
		{
			for (i = 0; s1[i]; i++)
				;
			i++;

			str = malloc(sizeof(char) * i);
			if (!str)
				return (NULL);
			for (x = 0; x < i; x++)
			{
				str[x] = s1[x];
			}
		}
		else if (s1 == NULL)
		{
			for (i = 0; s2[i]; i++)
				;
			i++;

			str = malloc(sizeof(char) * i);
			if (!str)
				return (NULL);
			for (x = 0; x < i; x++)
			{
				str[x] = s2[x];
			}
		}
		else
		{
			for (i = 0; s1[i]; i++)
				;
			for (j = 0; s2[j]; j++)
				;
			j++;

			str = malloc(sizeof(char) * (i + j));
			if (!str)
				return (NULL);
			for (x = 0; x < i; x++)
			{
				str[x] = s1[x];
			}
			for (; x < (i + j); x++)
			{
				str[x] = s2[z];
				z++;
			}
		}
	}
	return (str);
}
