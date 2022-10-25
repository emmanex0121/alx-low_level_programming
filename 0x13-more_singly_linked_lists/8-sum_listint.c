#include "lists.h"

/**
 * sum_listint - Function to return linked list lenght
 * @head: Singly Linked list head pointer
 *
 * Return: Sum of all the data n
 */

int sum_listint(listint_t *head)
{
	int sum_data = 0;

	while (head)
	{
		if (h->n)
			sum_data += h->n;
		h = h->next;
	}
	return (sum_data);
}
