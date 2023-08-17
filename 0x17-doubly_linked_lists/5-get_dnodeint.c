#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: ptr to head of list
 * @index: index of the node to search for
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int siz;
	dlistint_t *temp;

	siz = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
	if (index == siz)
	return (temp);
	siz++;
	temp = temp->next;
	}
	return (NULL);
}
