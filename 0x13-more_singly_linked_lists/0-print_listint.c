#include "lists.h"
/**
* print_listint - prints all the elements of a listint_t list
* @h: linked list
*
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t numb = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		numb++;
		current = current->next;
	}

	return (numb);
}
