#include "lists.h"

/**
 * free_list - function to free list memory
 * @head: Singly linked list
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
