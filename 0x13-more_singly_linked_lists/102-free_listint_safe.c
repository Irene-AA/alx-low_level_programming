#include "lists.h"
#include<stdlib.h>
/**
 * free_listint_safe - frees a linked list,sets head to NULL
 * @h: double pointer to head
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *current;
	size_t n;

	for (n = 0, current = *h; current != NULL; n++)
	{
		temp = current;
		current = current->next;
		free(temp);

		if (temp < current)
			break;
	}
	*h = NULL;
	return (n);
}
