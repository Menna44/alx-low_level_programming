#include "lists.h"

/**
 * print_listint - prints out all the list elements
 * @h: head of the list
 *
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cur = h;
	size_t count = 0;

	while (cur != NULL)
	{
		printf("%d\n", cur->n);
		count += 1;
		cur = cur->next;
	}
	return (count);
}
