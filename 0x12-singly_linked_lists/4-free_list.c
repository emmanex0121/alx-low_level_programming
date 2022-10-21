#include "lists.h"

/**
 * free_list - function to free list memory
 * @head: Singly linked list
 */

void free_list(list_t *head)
{
	while (head)
	{
		head = head->next;
		free (head->str);
		free(head);
	}
}
