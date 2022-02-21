#include "main.h"
#include <stdio.h>
/**
 * _strlen - check the code
 *@s: pointer inside the funtion
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len1;

	len1 = 0;
	while (*s != '\0')
	{
		len1++;
		s++;
	}
	return (len1);
}
