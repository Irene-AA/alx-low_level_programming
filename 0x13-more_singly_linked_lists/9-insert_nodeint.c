#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to head
 * @index: index node will be inserted
 * @n: node value
 * Return: Address of new node,NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *current;
	listint_t *new;
	unsigned int cnt;

	if (head == NULL)
		return (NULL);
	current = *head;
	cnt = 1;
	while (cnt < index)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
		cnt++;
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (index == 0)
	{
		*head = new;
		new->next = current;
	}
	else if (current->next)
	{
		new->next = current->next;
		current->next = new;
	}
	else
	{
		new->next = NULL;
		current->next = new;
	}
	return (new);
}
