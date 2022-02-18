#include "main.h"

/**
 * _isupper - check the code.
 *@c: char inside the funtion
 * Return: depends of the int inside the funtion
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
