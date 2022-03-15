#include <stdio.h>
#include "dog.h"

/**
 * print_dog - check the code
 *@d: pointer to the struct
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (!(d->age))
			printf("(nil)\n");
		else
			printf("Name: %f\n", d->age);
		if (!(d->owner))
			printf("(nil)\n");
		else
			printf("Name: %s\n", d->owner);
	}
}
