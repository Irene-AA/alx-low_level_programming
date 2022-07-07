#include"function_pointers.h"
#include<stdio.h>
/**
 * int_index - int function
 * @array: array
 * @size: array size
 * @cmp: function pointer
 * Description: searches for an integer
 * Return: index of first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
