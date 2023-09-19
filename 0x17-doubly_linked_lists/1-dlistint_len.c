#include "lists.h"
/**
 * dlistint_len - len of linked list
 * @h: pointer
 *
 * Return: num of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
