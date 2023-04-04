#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n) of a listint_t linked list
* @head: first node in the list
*
* Return: result of sum
*/
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		add = add + temp->n;
		temp = temp->next;
	}

	return (add);
}
