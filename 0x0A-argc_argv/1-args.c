#include<stdio.h>
/**
 * main- main function
 * Description- prints number of arguments passed
 * @argc: argument size
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
