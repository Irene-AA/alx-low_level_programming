#include<stdio.h>

/**
  * print_number - Prints an integer
  * @n: Number
  */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}

	x = n;

	if (x / 10)
		print_number(x / 10);
    putchar(x % 10 + '0');
}
