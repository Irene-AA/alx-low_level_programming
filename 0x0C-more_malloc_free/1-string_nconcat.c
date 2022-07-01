#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * string_nconcat- concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: NULL if fail
 */

/**
 * _strlen- finds length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a, b, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = (unsigned int)_strlen(s1);
	p = malloc((a + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (b = 0, c = 0; b < (a + n); b++)
	{
		if (b < a)
			p[b] = s1[b];
		else
			p[b] = s2[c++];
	}
	p[b] = '\0';

	return (p);
}
