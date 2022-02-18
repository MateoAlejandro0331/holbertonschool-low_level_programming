#include "main.h"

/**
* _isdigit - check the code.
* @c: char inside the funtion.
* Return: the c value
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
