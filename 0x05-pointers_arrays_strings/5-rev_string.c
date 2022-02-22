#include "main.h"
#include <stdio.h>

/**
 * rev_string - check the code
 *@s: a pointer inside the funtion.
 * Return: Always 0.
 */

void rev_string(char *s)
{
	char arr[20];
	int i = 0;
	int j;

	for (j = 0; s[j]; j++)
	{
		arr[j] = s[j];
	}
	for (j--; j >= 0; j--)
	{
		s[j] = arr[i];
		i++;
	}
}
