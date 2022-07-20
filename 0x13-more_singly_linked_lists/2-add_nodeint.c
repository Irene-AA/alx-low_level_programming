#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * add_nodeint - add a new node to the beginning of a list
 * @head: double pointer to head
 * @n: value for new node
 * Return: address of new element,NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	*head = new;

	if (temp == NULL)
		new->next = NULL;
	else
		new->next = temp;
	return (new);
}
