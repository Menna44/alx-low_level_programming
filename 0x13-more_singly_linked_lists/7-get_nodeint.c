#include "lists.h"

/**
 * get_nodeint_at_index - function returns the node of the passed index
 * @head: first node
 * @index: the passed index to get its value
 *
 * Return: pointer to the passed index node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
