#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a linked  dlistin_t list
 *
 * @h: head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int cou;

	cou = 0;

	if (h == NULL)
		return (cou);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		cou++;
		h = h->next;
	}

	return (cou);
}
