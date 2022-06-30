#include "main.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/**
 * main - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: result or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *t;
	unsigned long int i;
	int j = 0;

	t = malloc(sizeof(s1) * sizeof(s2) + 1);
	for (i = 0;  ; i++)
	{
		if (i < strlen(s1))
			t[i] = s1[i];
		else
			t[i] = s2[j++];
	}
	if (s1 == NULL || s2 == NULL)
	{
		s1 = " ";
		s2 = " ";
	}
	if (t == NULL)
		return (NULL);
	return (t);
}
