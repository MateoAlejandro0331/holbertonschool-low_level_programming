#include "main.h"

/**
* _strcat - check the code
*@dest: pointer inside the funtion
*@src: pointer inside the funtion
* Return: Always 0.
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
