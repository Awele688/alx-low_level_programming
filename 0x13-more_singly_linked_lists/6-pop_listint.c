#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: ptr to first element in the list
*
* Return: the data inside the elements that was deleted,
* or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *tem;
	int numb;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	numb = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (numb);
}
