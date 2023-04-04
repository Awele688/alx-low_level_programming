#include "lists.h"
/**
* listint_len -  returns the number of elements in a linked listint_t list
* @h: linked list
*
* Return: the number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		numb++;
		current = current->next;
	}

	return (numb);
}
