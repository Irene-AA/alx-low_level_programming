#include<stdio.h>
#include "lists.h"
/**
 * print_list- prints all the elements of a list
 * @h: head
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t a;

	current = h;
	for (a = 0; current != NULL ; a++)
	{
		printf("[%d] %s\n", current->len, current->str);
		current = current->next;
	}

	if (current->str == NULL)
		printf("[0] (nil)");

	return (a);
}
