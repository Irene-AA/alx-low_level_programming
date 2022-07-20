#include"lists.h"
#include<stdlib.h>
/**
 * add_nodeint_end - add a new node at the end oof a list
 * @head: double pointer to head
 * @n: value to store in new node
 * Return: address of new element, NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (current)
		current->next = new;
	else
		*head = new;
	return (new);
}
