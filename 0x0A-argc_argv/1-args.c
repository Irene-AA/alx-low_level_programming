#include<stdio.h>
/**
 * main: main function
 * Description: prints number of arguments passed
 *@argc: argument size
 @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (argv[0])
	printf("%d\n", argc);
	return (0);
}
