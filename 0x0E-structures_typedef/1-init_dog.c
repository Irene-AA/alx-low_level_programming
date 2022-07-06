#include<stdlib.h>
#include "dog.h"
/**
 * init_dog - void function
 * @d: struct pointer
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: a function that initializes a variable of type struct dog
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
