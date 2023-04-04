#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list
* @head: first node in the list
* @index: index of the node to return
*
* Return: pointer to the node, or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;
	listint_t *temp = head;

	for (j = 0; temp && j < index; j++)
	{
		temp = temp->next;
	}

	return (temp ? temp : NULL);
}
