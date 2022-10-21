#include "lists.h"

/**
 * add_node - Function to add a new head node to the list
 * @str: pointer to string to be copied
 * @head: list to be pushed to first spot
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	list_t *newNode; /* Create a new Node */

	newNode = malloc(sizeof(list_t)); /* Allocate a heap of memory */
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str); /* point to the data of the new node */

	for (len = 0; str[len]; len++)
		;
	newNode->len = len;

	newNode->next = *head; /* Make the new node point to the head node */
	*head = newNode; /* Set the pointer head to point to the newNode*/

	return (*head);
}
