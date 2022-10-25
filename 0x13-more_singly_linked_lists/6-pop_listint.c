#include "lists.h"

/**
 * pop_listint - Function to delete head node of list
 * @head - pointer pointer to singly linked list
 *
 * Return: head data before deletion;
 */

int pop_listint(listint_t **head)
{
	int head_n;

	if (head == NULL)
		return (0);

	n = head->n;
	*head = head->next;
	free(head);

	return (head_n);
}
