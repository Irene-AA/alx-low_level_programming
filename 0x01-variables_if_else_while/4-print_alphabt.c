#include <stdio.h>
/**
 * main- main function
 * Description: prints all letters but q and e
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		(x++);
		putchar(x);
	}
	putchar('\n');
	return (0);
}
