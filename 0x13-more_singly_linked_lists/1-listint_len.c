#include"lists.h"
#include<stdio.h>
/**
 * listint_len - find the number of elements in a linked list
 * @h: head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *a;
	size_t cnt;

	a = h, cnt = 0;
	while (a != NULL)
	{
		cnt++;
		a = a->next;
	}
	return (cnt);
}
