#include "lists.h"

/**
 * free_listint - Function to free singly linked list
 * @head: singly linked list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

