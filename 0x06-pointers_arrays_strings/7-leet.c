#include<stdio.h>

/**
  * leet - Encodes a string into 1337
  * @s: string
  * Return: result
  */
char *leet(char *s)
{
	int a = 0;
	char b[5] = {'A', 'E', 'O', 'T', 'L'};
	char c[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		while (a < 5)
		{
			if (s[a] == b[a] || s[a] - 32 == b[a])
			{
				s[a] = c[a];
			}
		}
		a++;
	}
	return (s);
}
