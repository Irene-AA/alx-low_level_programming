#include<stdio.h>

/**
 * _strncat - char function
 * Description - concatenate two strings with no terminating null and n bytes
 * @dest: char string to concatenate to
 * @src: char string
 * @n: number of bytes
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;

	for (b = 0; src[b] != '\0' && n > 0; b++, n--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
