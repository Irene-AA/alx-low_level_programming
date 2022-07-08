#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - prints opcodes
 * @c: address
 * @n: number of bytes
 */
void print_opcodes(char *c, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", c[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: O
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
