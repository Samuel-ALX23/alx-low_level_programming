#include "lists.h"

/**
 * free_list - Frees a linked list and its nodes
 * @head: Pointer to the head of the linked list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
