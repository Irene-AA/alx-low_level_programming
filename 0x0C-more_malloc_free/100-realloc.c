#include<stdio.h>
#include"main.h"
#include<stdlib.h>
/**
 * _realloc- reallocates memory
 * @ptr: previous memory
 * @old_size: old ptr size
 * @new_size: new ptr size
 * Return: pointer or NULL if fail
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *pp = ptr;
	unsigned int o = 0;

	if (old_size == new_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size == old_size)
		new_size = old_size;
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	while (o < old_size)
	{
		p[o] = pp[o];
		o++;
	}
	free(ptr);
	return (p);
}
