#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * print_listint_safe - prints a linked list + mem address
 * @head: pointer to head
 * Return: number of nodes, status 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *temp;
	size_t n;

	if (head == NULL)
		exit(98);
	current = head;
	for (n = 0; current != NULL; n++)
	{
		temp = current;
		current = current->next;
		printf("[%p] %d\n", (void *)temp, temp->n);

		if (temp < current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}
	return (n);
}
