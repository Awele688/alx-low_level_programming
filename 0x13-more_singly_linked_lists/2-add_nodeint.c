#include "lists.h"
/**
* add_nodeint - adds a new node at the beginning of a listint_t list
* @head: pointer to first node
* @n: data for new node
*
* Return: address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *novel;

	novel = malloc(sizeof(listint_t));
	if (!novel)
	{
		return (NULL);
	}

	novel->n = n;
	novel->next = *head;
	*head = novel;

	return (novel);
}
