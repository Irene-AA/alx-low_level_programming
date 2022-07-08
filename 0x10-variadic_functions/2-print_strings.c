#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list	s;

	va_start(s, n);
	for (a = 0; a < n; a++)
	{
		if (va_arg(s, char *) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(s, char *));
		if (separator != NULL && a < (n - 1))
			printf("%s", separator);
	}
	va_end(s);
	printf("\n");
}
