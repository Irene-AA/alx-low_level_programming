#include<stdio.h>

/**
 * _strcmp - Compares two strings
 * @s1: string
 * @s2: string
 * Return: negative int if s1 < s2, 0 if matching, and positive int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int c;

	for (c = 0; s1[c] != '\0' || s2[c] != '\0'; c++)
	{
		if (s1[c] != s2[c])
			return (s1[c] - s2[c]);
	}
	return (0);
}
