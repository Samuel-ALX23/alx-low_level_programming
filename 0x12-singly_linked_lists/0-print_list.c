#include "lists.h"

/**
 * print_list - prints all formated list of the linked list
 * @*h: Pointer to the head of the linked list
 *
 * Return: sam number node to be printed
 */

size_t print_list(const list_t *h)
{
	size_t sam = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		sam++;
	}

	return (sam);
}
