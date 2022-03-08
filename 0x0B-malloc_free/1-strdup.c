#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - check the code
 * @str: Pointer that contains the string to duplicate.
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i]; i++);
		i++;
		s = malloc(sizeof(char) * i);
		if (!s)
		{
			return (NULL);
		}
		for (j = 0; j < i; j++)
		{
			s[j] = str[j];
		}
	}
	return (s);
}
