#include "main.h"

/**
  * _memset - Fill memory with a constant byte
  * @s: memory area
  * @b: constant byte
  * @n: bytes of memory
  * Return: the memory area filled
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}

	return (s);
}
