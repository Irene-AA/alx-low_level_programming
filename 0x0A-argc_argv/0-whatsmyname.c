#include<stdio.h>
/**
 * main: main function with arguments
 * Description- prints program name
 * @argc: argument size
 * @argv: augument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
	printf("%s\n", argv[0]);
	return (0);
}
