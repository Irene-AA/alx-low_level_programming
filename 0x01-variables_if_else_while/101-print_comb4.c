#include<stdio.h>
/**
 * main- main function
 * Description: prints possible combination of 3 digits
 * first digit smaller than the second and third
 * Return: 0
 */
int main(void)
{
	int d;
	int c;
	int e;

	for (d = '0'; d <= '9'; d++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			for (e = '0'; e <= '9'; e++)
			{
				if (d < c && d < e)
				{
					putchar(d);
					putchar(c);
					putchar(e);
					if (d != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
