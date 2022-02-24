#include "main.h"

/**
* _strcmp - check the code
*@s1: pointer inside the funtion.
*@s2: pointer inside the funtion.
* Return: Always 0.
*/

int _strcmp(char *s1, char *s2)
{
	int len;

	for (len = 0; s1[len] && s2[len]; len++)
	{
		if (s1[len] != s2[len])
		{
			return (s1[len] - s2[len]);
		}
	}
	return (0);
}
