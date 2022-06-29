#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * *create_array- char function
 * description- creates an array of chars and initializes with a specific char
 * @size : size
 * @c: char
 * Return: pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
		return (NULL);
	t = malloc(sizeof(*t) * size);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}
	return (t);
}
