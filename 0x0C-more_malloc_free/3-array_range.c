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
	int *p;
	int a = 0, b;

	b = max - min + 1;
	p = malloc(sizeof(int) * b);
	if (p == NULL)
		return (NULL);
	if (min > max)
		return (NULL);
	while (a < b)
	{
		p[a] = min;
		a++;
		min++;
	}
	return (p);
}
