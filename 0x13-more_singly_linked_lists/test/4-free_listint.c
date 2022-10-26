#include "lists.h"

/**
 * free_listint - Function to free singly linked list
 * @head: singly linked list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		head = head->next;
		free(head);
	}
}

