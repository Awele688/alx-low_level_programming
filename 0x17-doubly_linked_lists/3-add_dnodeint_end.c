#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of dlistint_t list
 *
 * @head: head
 * @n: value
 * Return: address of novel element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hd;
	dlistint_t *novel;

	novel = malloc(sizeof(dlistint_t));
	if (novel == NULL)
		return (NULL);

	novel->n = n;
	novel->next = NULL;

	hd = *head;

	if (hd != NULL)
	{
		while (hd->next != NULL)
			hd = hd->next;
		hd->next = novel;
	}
	else
	{
		*head = novel;
	}

	novel->prev = hd;

	return (novel);
}
