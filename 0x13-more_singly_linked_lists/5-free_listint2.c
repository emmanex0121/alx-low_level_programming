#include "lists.h"

/**
 * free_listint2 - Function that frees list and sets head
 * @head: singly linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}
