#include<stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: head
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t a;

	current = h;
	for (a = 0; current != NULL; a++)
		current = current->next;
	return (a);
}
