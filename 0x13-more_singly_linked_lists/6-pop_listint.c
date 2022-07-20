#include"lists.h"
#include<stdlib.h>
/**
 * pop_listint - delete the head node of a linked list
 * @head: double pointer to head node of linked list
 * Return: head node's data(n), or 0 if empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
