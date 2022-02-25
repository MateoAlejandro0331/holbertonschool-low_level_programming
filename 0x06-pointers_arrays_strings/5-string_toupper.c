#include "main.h"

/**
* string_toupper - check the code
*@dest: pointer inside the funtion.
* Return: Always 0.
*/

char *string_toupper(char *dest)
{
	int i;

	for (i = 0; dest[i]; i++)
	{
		if (dest[i] >= 97 && dest[i] <= 122)
		{
			dest[i] = dest[i] - 32;
		}
	}
	return (dest);
}
