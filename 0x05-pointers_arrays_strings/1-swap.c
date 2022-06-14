#include<stdio.h>

/**
 * swap_int -void function
 * @a: int pointer
 * @b: int pointer
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
