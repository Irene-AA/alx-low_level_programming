#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 */

void print_buffer(char *b, int size)
{
	int a = 0, s, d = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		s = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (d = 0; d < 10; d++)
		{
			if (d < s)
				printf("%02x", *(b + a + d));
			else
				printf("  ");
			if (d % 2)
			{
				printf(" ");
			}
		}
		while(d < s)
		{
			int c = *(b + a + d);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		a += 10;
		d++;
	}
}
