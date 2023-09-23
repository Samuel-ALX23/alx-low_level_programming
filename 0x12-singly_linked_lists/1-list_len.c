#include "lists.h"

/**
 * list_len - Calculates the length of a linked list
 * @h: Pointer to the head of the linked list
 *Return: The number of nodes in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t yoda = 0;

	while (h)
	{
		yoda++;
		h = h->next;
	}
	return (yoda);
}
