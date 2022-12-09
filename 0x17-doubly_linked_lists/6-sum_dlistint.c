#include "lists.h"
/**
 * sum_dlistint - function to add the elements of structure
 * @head: pointer to structure
 * Return: the adrress of nth node, or NULL if it failed
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
