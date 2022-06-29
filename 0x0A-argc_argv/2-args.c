#include<stdio.h>
/**
 * main- main function
 * @argc: argument size
 * @argv: argument vector
 * Description- prints all arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
