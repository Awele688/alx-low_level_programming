#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of dlistint_t list
 *
 * @head: head of list
 * @n: value of element
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *novel;
	dlistint_t *hd;

	novel = malloc(sizeof(dlistint_t));
	if (novel == NULL)
		return (NULL);

	novel->n = n;
	novel->prev = NULL;
	hd = *head;

	if (hd != NULL)
	{
		while (hd->prev != NULL)
			hd = hd->prev;
	}

	novel->next = hd;

	if (hd != NULL)
		hd->prev = novel;

	*head = novel;

	return (novel);
}
