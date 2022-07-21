#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shift;

	if (n == 0)
	{
		printf("0");
		return;
	}
  temp = n, shift = 0;
  while (temp >>= 1)
    shift++;
  
	for (; shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
			printf("1");
		else
			printf("0");
	}
}
