#include <stdio.h>

int main()
{
	int x;
	for ( x='a'; x <='z'; x++)
	{
		if( x == 'e' || x == 'q')
			(x++);	
		putchar(x);
	}
	putchar('\n');
	return 0;
}
