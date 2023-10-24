#include "lists.h"

/**
 * print_listint - program prints all the elements of a lists 
 * @h: head of a lists
 *
 * Return: numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		nnodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nnodes);
}
