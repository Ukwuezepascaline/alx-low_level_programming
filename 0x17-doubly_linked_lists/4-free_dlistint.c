#include "lists.h"
/**
 * free_dlistint - function that free a dlistint_t list.
 * @head: double pointer to structure
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;

	}
}
