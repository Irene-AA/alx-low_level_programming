#include "lists.h"
#include<stdlib.h>
/**
 * delete_nodeint_at_index - delete the node at a given index
 * @head: double pointer to head
 * @index: index of node to delete
 * Return:: 1 on success, -1 in failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int n;

	current = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
		*head = current->next;
	for (n = 0; n < index; n++)
	{
		temp = current;
		if (current->next)
			current = current->next;
		else
			return (-1);
	}

	if (current->next)
		temp->next = current->next;
	else
		temp->next = NULL;

	free(current);
	return (1);
}
