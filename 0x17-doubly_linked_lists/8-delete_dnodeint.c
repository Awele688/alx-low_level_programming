#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of
 * dlistint_t linked list
 *
 * @head: head
 * @index: index of new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hd1;
	dlistint_t *hd2;
	unsigned int j;

	hd1 = *head;

	if (hd1 != NULL)
		while (hd1->prev != NULL)
			hd1 = hd1->prev;

	j = 0;

	while (hd1 != NULL)
	{
		if (j == index)
		{
			if (j == 0)
			{
				*head = hd1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hd2->next = hd1->next;

				if (hd1->next != NULL)
					hd1->next->prev = hd2;
			}

			free(hd1);
			return (1);
		}
		hd2 = hd1;
		hd1 = hd1->next;
		j++;
	}

	return (-1);
}
