#include "main.h"

/**
* _strcmp - check the code
*@s1: pointer inside the funtion.
*@s2: pointer inside the funtion.
* Return: Always 0.
*/

int _strcmp(char *s1, char *s2)
{
	int lens1, lens2;

	for (lens1 = 0; s1[lens1]; lens1++)
		;
	for (lens2 = 0; s2[lens2]; lens2++)
		;
	if (lens1 == lens2)
	{
		return (0);
	}
	else if (lens1 < lens2)
	{
		return (-15);
	}
	else if (lens1 > lens2)
	{
		return (15);
	}
	return (0);
}
