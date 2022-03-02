#include "main.h"
/**
 * _strlen_recursion - check the code
 *@s: pointer inside the funtion
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (!s || !*s)
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
