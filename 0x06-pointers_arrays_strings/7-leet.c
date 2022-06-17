#include<stdio.h>

/**
  * leet - Encodes a string into 1337
  * @s: string
  * Return: result
  */
char *leet(char *s)
{
	int a = 0, e, j = 5;
	char b[5] = {'A', 'E', 'O', 'T', 'L'};
	char c[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		while (a < j)
		{
			e = 0;
			if (s[a] == b[e] || s[a] - 32 == b[e])
			{
				s[a] = c[e];
			}
			e++;
		}
		a++;
	}
	return (s);
}
