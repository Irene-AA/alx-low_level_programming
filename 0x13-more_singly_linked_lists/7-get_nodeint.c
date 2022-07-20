#include"lists.h"
/**
 * get_nodeint_at_index - Get the nth node of a list
 * @head: pointer to head
 * @index: linked list index
 * Return: pointer to node, NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int cnt;

	current = head;
	cnt = 0;
	while (cnt < index)
	{
		if (current)
			current = current->next;
		else
			return (NULL);
		cnt++;
	}

	if (current)
		return (current);
	else
		return (NULL);
}
