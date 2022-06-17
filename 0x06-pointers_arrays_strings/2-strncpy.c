#include<stdio.h>

/**
 * _strncpy - Copy a string starting from index 0 of dest.
 * @dest: string
 * @src: string
 * @n: number of chars to copy 
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];

	while (n > a)
  {
		dest[a] = '\0';
    a++;
  }

	return (dest);
}
