#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * add_node- adds a new node at the beginning of a list
 * @head: pointer to head
 * @str: str
 * Return: Address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int x;

	x = 0;
	while (str[x] != '\0')
		x++;
	new = malloc(sizeof(list_t));
	new->str = strdup(str);

	if (new == NULL || new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = x;
	new->next = *head;

	*head = new;
	return (*head);
}
