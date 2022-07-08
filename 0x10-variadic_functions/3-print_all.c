#include"variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
 * printchar - prints char type
 * @a: va_list passed
 */
void printchar(va_list a)
{
	printf("%c", va_arg(a, int);
}

/**
 * print_all - prints anything
 * @format: argument types
 */

void print_all(const char *const format, ...)
{
	va_list a;
}
