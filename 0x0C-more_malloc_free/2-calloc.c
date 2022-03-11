#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocate a specific memory
 * @nmemb: size of the antire mamory
 * @size: the size of the type date
 *
 * Return: pointer to the allocate memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;
	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(sizeof(size) * nmemb);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	return (str);
}
