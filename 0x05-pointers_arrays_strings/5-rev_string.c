#include<stdio.h>

/**
 * rev_string - void function
 * @s: string 
 *Description - reverses a string
 * Return: void
 */
void rev_string(char *s)
{
	int c, d = 0;
	char e[1000];

	while (*(s + c))
	{
		*(e + c) = *(s + c);
		c++;
	}
	c = c - 1;
	while (c >= 0)
	{
		*(s + c) = *(e + d);
		d++;
		c--;
	}
}
