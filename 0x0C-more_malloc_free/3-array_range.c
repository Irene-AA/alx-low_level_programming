#include<stdio.h>
#include"main.h"
#include<stdlib.h>
/**
 * array_range- creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer,NULL if fail
 */

int *array_range(int min, int max)
{
	char *p;
	unsigned int a = 0;

	p = malloc(max - min + 1);
	if (p == NULL)
		return (NULL);
	if (min > max)
		return (NULL);
	while (a < max + 1)
	{
		p[a] = min;
		a++;
		min++;
	}
	return (p);
}
