#include<stdio.h>
/**
 * main- main function
 * Description: prints in base 16
 * Return: 0
 */
int main(void)
{
	char z;
	int y;

	for (y = '0'; y <= '9'; y++)
	{
		putchar(y);
	}
	for (z = 'a'; z <= 'f'; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
