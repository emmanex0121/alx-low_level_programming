#include "lists.h"

/**
 * get_nodeint_at_index - Function to get nth index node of the list
 * @head: singly linked list
 * @index: index of the node to search for
 *
 * Return: NULL if node at nth index is NULL, else nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && head->next; i++)
	{
		/*if (index == i)*/
		/*{*/
			/*if (head != NULL)*/
				/*return (head);*/
			/*else*/
				/*return (NULL);*/
		/*}*/
		head = head->next;
	}
	return (head);
}
