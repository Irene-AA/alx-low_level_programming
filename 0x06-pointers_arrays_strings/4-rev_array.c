#include<stdio.h>

/**
 * reverse_array - reverses the contents of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int e = 0;
	int f;

	while(e < (n / 2))
	{
		f = a[e];
		a[e] = a[n - e - 1];
		a[n - e - 1] = f;
  		e++;
	}
}
