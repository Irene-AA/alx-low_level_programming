#include<stdio.h>

/**
  *puts2 -void function
  * Description - Prints every other character of a string
  * @str: string
  */
void puts2(char *str)
{
	int a;
	int b = 0;

	while (str[b] != '\0')
	{
		b++;
	}

	for (a = 0; a < b; a += 2)
	{
		putchar(str[a]);
	}

	putchar('\n');
}
