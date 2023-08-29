#include "lists.h"

/**
 * listint_len - function that gives the num of nodes the list
 * @h: head of the list
 *
 * Return: returns num of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *curs = h;
	size_t count = 0;

	while (curs != NULL)
	{
		count += 1;
		curs = curs->next;
	}
	return (count);
}
