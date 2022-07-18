#include<stdio.h>
/**
 * print_before - prints a statement before main is executed
 */

void __attribute__((constructor)) print_before()
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
