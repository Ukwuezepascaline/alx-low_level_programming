#include "lists.h"
/**
 * print_dlistint - function to print a doubly linked list
 * @h: pointer to structure
 * Return: an integer
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = NULL;
	size_t i = 0;

	if (!h)
		return ('\0');
	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
