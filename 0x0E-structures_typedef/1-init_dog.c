#include <stdio.h>
#include "dog.h"

/**
 * init_dog - check the code
 *@d: pointer to the direction of the struct
 *@name: Dogs name
 *@age: Dogs age
 *@owner: Owner name
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
