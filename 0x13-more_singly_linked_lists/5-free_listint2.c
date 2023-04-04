#include "lists.h"
/**
* free_listint2 - frees a listint_t list
* @head: ptr to the listint_t list that ought be freed
*/
void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return;
	}

	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
