#include "lists.h"

/**
 * sum_listint - Calculates the sum of all integers in a listint_t list
 * @head: Pointer to the head of the linked list
 * Return: The sum of all integers in the list
 */

int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp = head;

	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}

	return (add);
}
