#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - check the code
 *@s: pointer inside the funtion
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len1;

	len1 = 0;
	while (*s != '\0')
	{
		len1++;
		s++;
	}
	return (len1);
}
/**
 * _strcpy - check the code
 *@dest: pointer inside the funtion
 *@src: pointer inside the funtion
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
/**
 * *new_dog - create the new dog type dog_t
 * @name: char pointer input
 * @age: float value input
 * @owner: char pointer input
 * Return: new struct dog created with dog_t type.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = NULL;
	int size_n = 0, size_o = 0;
	char *name1, *owner1;

	if (!name || !age || !owner)
		return (NULL);

	my_dog = malloc(sizeof(struct dog));
	if (!my_dog)
		return (NULL);

	size_n = _strlen(name);
	size_o = _strlen(owner);

	name1 = malloc(sizeof(char) * size_n + 1);
	if (!name1)
	{
		free(my_dog);
		return (NULL);
	}
	owner1 = malloc(sizeof(char) * size_o + 1);
	if (!owner1)
	{
		free(name1);
		free(my_dog);
		return (NULL);
	}

	_strcpy(name1, name);
	_strcpy(owner1, owner);

	my_dog->name = name1;
	my_dog->age = age;
	my_dog->owner = owner1;
	return (my_dog);
}
