#include "main.h"
/**
 * init_dog - function that initialize a variable of type struct
 * @d: pointer to structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owneer of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
