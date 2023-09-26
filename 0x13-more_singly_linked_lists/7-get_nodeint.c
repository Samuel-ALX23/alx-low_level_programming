#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves the node index in a listint_t list
 * @head: Pointer to the head of the linked list
 * @index: Index of the node to retrieve
 * Return: Pointer to the node at the given index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t y = 0;
	listint_t *temp = head;

	while (temp && y < index)
	{
		temp = temp->next;
		y++;
	}
	return (temp ? temp : NULL);
}
