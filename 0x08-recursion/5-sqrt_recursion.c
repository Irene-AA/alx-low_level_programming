#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	return (rt(n, 1));
}

/**
 * halp - helper function to solve _sqrt_recursion
 * @c: number to determine if square root
 * @i: incrementer to compare against `c`
 * Return: square root if natural square root, or -1 if none found
 */

int rt(int a, int i)
{
	int square;

	square = i * i;
	if (square == a)
		return (i);
	else if (square < a)
		return (rt(a, i + 1));
	else
		return (-1);
}
