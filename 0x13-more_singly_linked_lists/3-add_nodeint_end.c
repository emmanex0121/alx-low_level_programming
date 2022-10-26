#include "lists.h"

/**
 * add_nodeint_end - Function to add a new node to the list's end
 * @head: Singly Linked List Head
 * @n: new integer value to add to list
 *
 * Return: Address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (temp)
	{
		for (i = 0; temp->next != NULL; i++)
			temp = temp->next;
		temp->next = newNode;
	}
	else
		*head = newNode;

	return (newNode);
}
