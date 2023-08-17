#include "lists.h"

/**
 * print_dlistint - prints all elements of a
 * dlistint_t list
 *
 * @h: head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int cou;

	cou = 0;

	if (h == NULL)
		return (cou);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		cou++;
		h = h->next;
	}

	return (cou);
}
