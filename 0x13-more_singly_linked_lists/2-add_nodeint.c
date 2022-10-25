#include "lists.h"

/**
 * add_nodeint - Function to add a new node to the list's beginning
 * @h: Singly Linked List
 *
 * Return: Address of the new element;
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
