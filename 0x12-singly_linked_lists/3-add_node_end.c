#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
#include<string.h>
/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to head
 * @str: string
 * Return: address of new element or NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;
	int x;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;
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
	new->next = NULL;
	if (current)
		current->next = new;
	else
		*head = new;
	return (*head);
}
