#include<stdio.h>

/**
  * leet - Encodes a string into 1337
  * @s: string
  * Return: result
  */
char *leet(char *s)
{
	int a = 0, e = 0;
	char b[5] = {'A', 'E', 'O', 'T', 'L'};
	char c[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		while (a < 5)
		{
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
