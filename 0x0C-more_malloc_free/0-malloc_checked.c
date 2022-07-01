#include<stdio.h>
#include "main.h"
#include<stdlib.h>
/**
 * malloc_checked- allocates memoryy using malloc
 * @b: pointer
 * Return: 98 if function fails
 */

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (n == NULL)
		exit(98);
	return (n);
}
