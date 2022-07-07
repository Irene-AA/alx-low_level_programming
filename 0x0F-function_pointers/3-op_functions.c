#include"3-calc.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * op_add - adds
 * @a: first operand
 * @b: second operand
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -subtracts
 * @a: first operand
 * @b: second operand
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -multiplies
 * @a: first operand
 * @b: second operand
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides
 * @a: first operand
 * @b: second operand
 * Return: division result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus
 * @a: first operand
 * @b: second operand
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
