#include<stdio.h>

/**
  * cap_string - capitalizes all words in string
  * @s: string
  * Return: string
  */
char *cap_string(char *s)
{
	int a = 0, b;
	int caps = 13;
	char sp[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		b = 0;

		while (i < caps)
		{
			if ((a == 0 || s[a - 1] == sp[b]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;
			b++;
		}
		a++;
	}
	return (s);
}
