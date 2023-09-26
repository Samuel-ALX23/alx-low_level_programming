#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at given index in a listint_t list
 * @head: Pointer to a pointer to the head of the linked list
 * @index: Index of the node to delete
 * Return: 1 upon successful deletion
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	size_t y = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (y < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);

		temp = temp->next;
		y++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
