#include "lists.h"

/**
 * sum_dlistint - returns sum of all data (n)
 * of a doubly linked list
 *
 * @head: head 
 * Return: sum 
 */
int sum_dlistint(dlistint_t *head)
{
	int add;

	add = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			add += head->n;
			head = head->next;
		}
	}

	return (add);
}
