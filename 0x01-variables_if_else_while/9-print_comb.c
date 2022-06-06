#include<stdio.h>
/**
 * main- main function
 * Description: prints single digits
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i + ',');
	}
	putchar('\n');
	return (0);
}
