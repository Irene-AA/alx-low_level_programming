#include "main.h"

/**
 * factorial - returns factorial of a number.
 * @n: int
 * Return: factorial of number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
