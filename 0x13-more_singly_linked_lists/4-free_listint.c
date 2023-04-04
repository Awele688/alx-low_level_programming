#include "lists.h"
/**
* free_listint - frees a listint_t list
* @head: listint_t list that ought be freed
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (head->next)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

	free(head);
}
