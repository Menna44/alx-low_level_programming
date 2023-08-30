#include "lists.h"

/**
 * free_listint2 - function to free all list arguments
 * @head: pointer of the list we want to free
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
