#include<stdio.h>
#include<string.h>

/**
 * print_rev -function
 * @s: char pointer
 */
void print_rev(char *s)
{
	char c;
	c = strrev(*s);
	puts(c);
}
