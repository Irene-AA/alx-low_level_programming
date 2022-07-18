#include"lists.h"
#include<stdlib.h>
/**
 * free_list - frees a list
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *current, *nxt;

	current = head;
	while (current != NULL)
	{
		nxt = current->next;
		free(current->str);
		free(current);
		current = nxt;
	}
}
