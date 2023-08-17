#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * certain position
 *
 * @h: head
 * @idx: index of new node
 * @n: value of new node
 * Return: addr of new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *novel;
	dlistint_t *hd;
	unsigned int j;

	novel = NULL;
	if (idx == 0)
		novel = add_dnodeint(h, n);
	else
	{
		hd = *h;
		j = 1;
		if (hd != NULL)
			while (hd->prev != NULL)
				hd = hd->prev;
		while (hd != NULL)
		{
			if (j == idx)
			{
				if (hd->next == NULL)
					novel = add_dnodeint_end(h, n);
				else
				{
					novel = malloc(sizeof(dlistint_t));
					if (novel != NULL)
					{
						novel->n = n;
						novel->next = hd->next;
						novel->prev = hd;
						hd->next->prev = novel;
						hd->next = novel;
					}
				}
				break;
			}
			hd = hd->next;
			j++;
		}
	}

	return (novel);
}
