#include "main.h"

/**
*_strncpy - check the code
*@dest: pointer inside the funtion.
*@src: pointer inside the funtion.
*@n: int inside the funtion.
* Return: Always 0.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j]; j++)
	{
		dest[j] = src[j];
	}
	for ( ; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
