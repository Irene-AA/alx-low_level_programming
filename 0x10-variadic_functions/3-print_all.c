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
 * printstr - prints string type
 * @list: va_list passed
 */
void printstr(va_list a)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * printfloat - prints float type
 * @list: va_list passed
 */
void printfloat(va_list a)
{
	printf("%f", va_arg(list, double));
}

/**
 * printint - prints int type
 * @list: va_list passed
 */
void printint(va_list a)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_all - prints anything passed if char, int, float, or string.
 * @format: string of formats
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list b;
	char *sp;

	checker storage[] = {
		{ "c", printchar },
		{ "f", printfloat },
		{ "s", printstr },
		{ "i", printint }
	};

	i = 0;
	sp = "";
	va_start(b, format);
	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (storage[j].type[0] == format[i / 4])
		{
			printf("%s", sp);
			storage[j].f(b);
			sp = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(b);
}
