#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/

char *_strcat(char *dest, char *src)
{
	int i,j;
	for (i = 0; dest[i]; i++);
	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
