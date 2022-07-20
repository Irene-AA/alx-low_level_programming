#include "lists.h"
#include<stdio.h>
/**
 * print_listint - print all elements in a list
 * @h: head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *r;
	size_t cnt;

	for (r = h, cnt = 0; r != NULL; cnt++, r = r->next)
		printf("%d\n", r->n);
	return (cnt);
}
