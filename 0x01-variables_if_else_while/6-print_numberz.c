#include <stdio.h>
/**
 * main- main funcion
 * Description: Prints numbers in base ten to the screen
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
