#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * print_rev -function
 * @s: char pointer
 */
void print_rev(char *s)
{
	char c;
	c = strrev((int*)s);
	puts(c);
}
