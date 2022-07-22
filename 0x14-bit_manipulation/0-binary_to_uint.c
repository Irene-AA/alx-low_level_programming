#include "main.h"
#include<stdio.h>
/**
 * binary_to_unit - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal or 0 if there's no convertion
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int pow, sum;
	int size;

	if (b == NULL)
		return (0);
	size = 0;
	while (b[size])
	{
		if (b[size] != '0' && b[size] != '1')
			return (0);
		size++;
	}
	for (pow = 1, sum = 0, size--; size >= 0; size--, pow *= 2)
	{
		if (b[size] == '1')
			sum += pow;
	}
	return (sum);
}
