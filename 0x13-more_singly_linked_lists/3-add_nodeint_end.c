#include "lists.h"

/**
 * add_nodeint_end - function to add a node at the end
 * @head: pointer to the head
 * @n: int num
 *
 * Return: return the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node;
	listint_t *curs = *head;

	n_node = malloc(sizeof(listint_t));
	if (n_node != NULL)
	{
		n_node->n = n;
		n_node->next = NULL;
	}
	else
		return (NULL);
	if (curs != NULL)
	{
		while (curs->next != NULL)
			curs = curs->next;
		curs->next = n_node;
	}
	else
		*head = n_node;
	return (n_node);
}
