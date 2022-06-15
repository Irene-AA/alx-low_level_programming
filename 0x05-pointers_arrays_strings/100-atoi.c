#include<stdio.h>

/**
 * _atoi - int function
 * @s: char array string
 * Description: converts a string to an integer
 * Return: first integer in string
 */
int _atoi(char *s)
{
	int p;
	int l, k;

	l = 0;
	k = -1;
	for (p = 0; s[p] != '\0'; p++)
	{
		if (s[p] == '-')
			k *= -1;

		if (s[p] > 47 && s[p] < 58)
		{
			if (l < 0)
				l = (l * 10) - (s[p] - '0');
			else
				l = (s[p] - '0') * -1;

			if (s[p + 1] < 48 || s[p + 1] > 57)
				break;
		}
	}
	if (k < 0)
		l *= -1;

	return (l);
}
