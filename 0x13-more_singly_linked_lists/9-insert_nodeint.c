#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: ptr to the first node in the list
* @idx: index where the new node is added
* @n: data to put in the new node
*
* Return: address of the new node, or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j = 0;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	while (new == NULL || head == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (temp && j < idx)
	{
		if (j == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
		j++;
	}

	return (NULL);
}
