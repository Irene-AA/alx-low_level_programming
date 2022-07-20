#include"lists.h"
#include<stdio.h>
/**
 * reverse_listint - reverse a linked list
 * @head: double pointer to head
 * Description: used one loop, max of 2 variables
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *current;

	if (*head == NULL)
		return (NULL);

	current = *head;
	*head = current->next;
	temp = (*head)->next;
	current->next = NULL;
	if (*head == NULL)
	{
		*head = current;
		return (current);
	}

	while (temp != NULL)
	{
		(*head)->next = current;
		current = *head;
		*head = temp;
		temp = (*head)->next;
	}

	(*head)->next = current;
	return (*head);
}
