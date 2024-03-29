#include "lists.h"
/**
* delete_nodeint_at_index - deletes the node at index of a linked list
* @head: ptr to first element in the list
* @index: index of node to be deleted
*
* Return: 1 (Succeeded), or -1 (Failed)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (!*head)
		return (-1);

	if (!index)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (j < index - 1)
	{
		if (temp == NULL || (temp->next) == NULL)
			return (-1);
		temp = temp->next;
		j++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
