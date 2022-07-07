#include<stdlib.h>
#include"function_pointers.h"
/**
 * array_iterator - void function
 * @array: array
 * @size: array size
 * @action: function pointer
 * Description: function that executes a functon
 *given as a parameter on each element of an array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	for (a = 0; a < size; a++)
		action(array[a]);
}
