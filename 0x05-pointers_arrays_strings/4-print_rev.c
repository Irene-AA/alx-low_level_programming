#include<stdio.h>
#include<string.h>

/**
 * print_rev -function
 * @s: char pointer
 */
void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	for (c--; c >= 0; c--)
		_putchar(s[c]);

	_putchar('\n');
}
