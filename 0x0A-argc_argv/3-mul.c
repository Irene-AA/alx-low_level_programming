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
	int res, a;

	if (argc >= 2)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
		a = 0;
	}
	else
	{
		printf("Error\n");
		a = 1;
	}
	return (a);
}
