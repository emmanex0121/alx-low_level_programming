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
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (0);

	temp = *head;
	head_n = temp->n;
	*head = head->next;

	free(temp);

	return (head_n);
}
