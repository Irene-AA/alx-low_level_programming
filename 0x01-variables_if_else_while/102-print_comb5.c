#include<stdio.h>
/**
 * main- main function
 * Description: prints 2 possible combination of 2 digits
 * Return: 0
 */
int main(void)
{
	int d;
	int c;

	for (d = '0'; d <= '9'; d++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			if (d == c)
			{
				putchar(d);
				putchar(c);
				putchar(' ');
				do
				{
					c++;
					putchar(d);
					putchar(c);
				}
				while (d < c);
				if (d < c)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
