#include "main.h"

/**
 * _memset - check the code
 *@s: pointer inside the funtion
 *@b: char inside the funtion
 *@n: int inside the funtion
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j = n;
	int i;

	for (i = 0; i < j; i++)
	{
		s[i] = b;
	}
	return (s);
}
