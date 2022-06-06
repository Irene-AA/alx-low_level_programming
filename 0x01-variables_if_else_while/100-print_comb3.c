#include<stdio.h>
/**
 * main- main function
 * Description: prints possible combination of 2 digits
 * first digit smaller than the second
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
			if (d < c)
			{
				putchar(d);
				putchar(c);
				if (d != '8')
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
