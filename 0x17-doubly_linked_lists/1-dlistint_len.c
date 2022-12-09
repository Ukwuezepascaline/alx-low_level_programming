#include "lists.h"
/**
 * dlistint_len - function to print a doubly linked list
 * @h: pointer to structure
 * Return: an integer
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = NULL;
	size_t i = 0;

	if (!h)
		return ('\0');
	tmp = h;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
