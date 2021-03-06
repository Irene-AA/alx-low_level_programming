#include"variadic_functions.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list p;

	va_start(p, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(p, int));
		if (separator != NULL && a < (n - 1))
			printf("%s", separator);
	}
	va_end(p);
	printf("\n");
}
