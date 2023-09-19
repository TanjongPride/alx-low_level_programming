#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while ((temp = head))
	{
		head = head->next;
		free(temp);
	}
}
