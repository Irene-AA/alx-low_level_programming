#include "lists.h"
/**
 * sum_listint - sums all the int n's in a linked list
 * @head: pointer to head
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	for (sum = 0, current = head; current != NULL; current = current->next)
		sum += current->n;
	return (sum);
}
