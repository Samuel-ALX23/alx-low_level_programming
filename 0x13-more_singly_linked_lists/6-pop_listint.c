#include "lists.h"

/**
 * pop_listint - Removes the head node of a listint_t list and returns its value
 * @head: Pointer to a pointer to the head of the linked list
 * Return: Value of the removed head node, or 0 if the list is empty or head is NULL.
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data;

	if (!head || !*head)
		return (0);

	head_data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (head_data);
}
