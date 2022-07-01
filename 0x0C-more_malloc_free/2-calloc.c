#include<stdlib.h>
#include "main.h"
#include<stdio.h>
/**
 * _calloc- allocates memory for an array
 * @nmemb: number of elements
 * @size: size of elements
 * Return: pointer,NULL if fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int o;

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	for (o = 0; o < nmemb * size; o++)
	{
		p[o] = 0;
	}
	return (p);
}
