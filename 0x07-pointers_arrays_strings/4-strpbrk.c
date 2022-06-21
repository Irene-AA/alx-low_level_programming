#include "main.h"

/**
  * _strpbrk - search a string for any of a set of bytes
  * @s: string
  * @accept: accepted
  * Return:first occurrence of string found,NULL if not found
  */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
