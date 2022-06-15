#include <stdio.h>

/**
 * print_array - prints n elements in the array a
 * @a: array to print
 * @n: number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int b = 0;

	while (b < n)
	{
		printf("%d", a[b]);
		if (b < (n - 1))
			printf(", ");
		b++;
	}
	printf("\n");
}
