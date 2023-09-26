#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node given index in a listint_t list
 * @head: Pointer to a pointer to the head of the linked list
 * @idx: Index at which the new node should be inserted
 * @n: Value to be assigned to the new node
 * Return: Pointer to the newly inserted node, or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int y;
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (y = 0; y < idx - 1 && temp != NULL; y++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
