#include<stdio.h>
#include"dog.h"
/**
 * print_dog - void function
 * @d: struct pointer
 *
 * Description: prints a struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	printf("Name:%s\n Age:%f\n Owner:%s\n", d->name, d->age, d->owner);
}
