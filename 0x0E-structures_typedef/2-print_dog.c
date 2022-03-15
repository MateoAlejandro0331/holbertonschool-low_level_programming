#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("(nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Name: %f\n", d->age);
		if (!(d->owner))
			printf("(nil)\n");
		else
			printf("Name: %s\n", d->owner);
	}
}
