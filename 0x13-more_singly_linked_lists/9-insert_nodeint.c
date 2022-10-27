#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node to a linked list
 *                           at a given position
 * @head : pointer to the head of the list
 * @idx  : index of the list where the new node will be added
 *         (indices start at 0)
 * @n    : value for the new node to be added
 * Return: pointer to the new node,
 *         or NULL - if function fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *newNode;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}

	for (i = 0; temp && temp->next; i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		if (i && i == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
		}
		temp = temp->next;
	}
	return (temp);
}
