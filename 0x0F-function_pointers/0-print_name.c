#include<stdlib.h>
#include"function_pointers.h"
/**
 * print_name - void function
 * @name: name
 * @f: function pointer
 * Description: prints a name
 */

void print_name(char *name, void(*f)(char *))
{
	f(name);
}
