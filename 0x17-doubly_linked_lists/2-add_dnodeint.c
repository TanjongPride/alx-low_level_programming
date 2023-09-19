#include "lists.h"
/**
 * add_dnodeint - adds node at start
 * @head: pointer to head
 * @n: value to add
 * Return: pointer to new
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	
	if (!(*head))
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new = NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
