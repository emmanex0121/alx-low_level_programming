#include "lists.h"

/**
 * get_nodeint_at_index - Function to get the nth node of the list
 * @head: singly linked list
 * @index: index of node to search for and return
 *
 * Return: NULL if node at index is NULL else, return the Node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; head->next; i++)
	{
		if (index == i)
			if (head != NULL)
				return (head);
			else
				return (NULL);
		head = head->next;
	}
}
