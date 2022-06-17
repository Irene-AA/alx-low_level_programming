#include<stdio.h>

/**
  * string_toupper - Changes all lowercase letters to uppercase
  * @a: string
  * Return: a
  */
char *string_toupper(char *a)
{
	int b = 0;

	while (a[b])
	{
		if (a[b] >= 97 && a[b] <= 122)
		{
			a[b] -= 32;
		}

		b++;
	}
	return (a);
}
