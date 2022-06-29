#include<stdio.h>
#include<stdlib.h>
/**
 * main: main function
 * @argc: argument size
 * @argv: argument vector
 * Description: adds positive numbers
 * Return: 1 if error
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc < 2)
		printf("0\n");
	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
