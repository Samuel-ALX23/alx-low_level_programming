#include "lists.h"

/**
 * print_listint - Prints the elements of a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of elements in the linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t countnum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		countnum += 1;
		h = h->next;
	}
	return (countnum);
}
