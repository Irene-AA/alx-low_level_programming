#include<stdio.h>
#include<stdlib.h>
/**
 * main- main function
 * @argc: argument size
 * @argv: argument vector
 * Description- multiplies two integers
 * Return: 1 if error, 0
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc > 1)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
