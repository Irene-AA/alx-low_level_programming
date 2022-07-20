#include"lists.h"
/**
 * find_listint_loop - finds thhe loop in a linked list
 * @head: pointer to head
 * Return: address where loop is found,NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *currentb, *currente;

	if (head == NULL)
		return (NULL);

	currentb = currente = head;
	do {
		if (currentb->next)
			currentb = currentb->next;
		else
			return (NULL);
		if (currente->next->next)
			currente = currente->next->next;
		else
			return (NULL);
	} while (currente != currentb);

	currentb = head;
	while (currente != currentb)
	{
		currente = currente->next;
		currentb = currentb->next;
	}
	return (currentb);
}
