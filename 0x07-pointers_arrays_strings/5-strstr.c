#include "main.h"
/**
 * _strstr - check the code
 *@haystack: pointer inside the funtion.
 *@needle: char inside the funtion.
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[j] && haystack[i + 1] == needle[j + 1] &&
			    haystack[i + 2] == needle[j + 2] && haystack[i + 3] == needle[j + 3])
			{
				return (haystack + i);
			}
		}
	}
	if (needle[0] == '\0')
		return (haystack);
	return ('\0');
}
