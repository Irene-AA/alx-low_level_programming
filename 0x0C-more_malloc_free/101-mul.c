#include<stdio.h>
#include<stdlib.h>
/**
 * main- has arguments
 * @argc: arguument size
 * @argv: arguument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, res;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < 3; i++)
	{
		if (atoi(argv[i]) > 57 || 48 > atoi(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	return (0);
}
