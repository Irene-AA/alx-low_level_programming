#include <stdio.h>
/**
 * main- main function
 * Description: prints numbers 0 to 9
 * Return: 0
 */
int main(void)
{
	int b;

	for (b = '0' ; b <= '9' ; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
