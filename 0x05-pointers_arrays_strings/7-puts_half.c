#include<stdio.h>

/**
 * puts_half - prints the second half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int a, b = 0;

	while (*(str + b))
		b++;
	a = b / 2;
	if (b % 2)
		a += 1;
	while (a < b)
	{
		putchar(*(str + a));
		a++;
	}
	putchar('\n');
}
