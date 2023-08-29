#include "lists.h"

/**
 *free_listint2 - function to free a linked list
 *@head: pointer to the list head
 *
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *curs;
	listint_t **tmp = head;

	if (tmp != NULL)
	{
		while (*head != NULL)
		{
			curs = *head;
			free(curs);
			*head = (*head)->next;
		}

		*tmp = NULL;
	}
}
