#include "main.h"

/**
 * _memcpy - check the code
 *@dest: pointer inside the funtion
 *@src: char inside the funtion
 *@n: int inside the funtion
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = n;
	int i;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
