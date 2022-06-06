#include<stdio.h>
/**
 * main -main function
 * Description: prints alphabet in lower case using putchar
 * Return:0
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
