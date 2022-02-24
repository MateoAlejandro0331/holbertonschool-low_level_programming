#include "main.h"

/**
* _strncat - check the code
*@dest: pointer inside the funtion
*@src: pointer inside the funtion
*@n: int inside the funtion
* Return: Always 0.
*/


char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; j < n && src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
