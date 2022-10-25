#include "lists.h"

/**
 * pop_listint - Function to delete head node of list
 * @head: pointer pointer to singly linked list
 *
 * Return: head data before deletion;
 */

int pop_listint(listint_t **head)
{
	int head_n;
	listint_t *temp;

	temp = *head;
	if (temp == NULL)
		return (0);

	*head = temp->next;
	head_n = temp->n;

	free(temp);
	return (head_n);
}
