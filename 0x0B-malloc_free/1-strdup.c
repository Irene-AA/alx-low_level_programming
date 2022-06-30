#include "main.h"
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
/**
 * main- copies string to a new allocated memory
 * @str: string
 * Return: Pointer or NULL
 */

char *_strdup(char *str)
{
	char *d;
	unsigned long int i;

	d = malloc(sizeof(char) * 100);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
	{
		d[i] = str[i];
		/*if (sizeof(d) > sizeof(char))
			return (NULL);**/
	}
	return (d);
}
