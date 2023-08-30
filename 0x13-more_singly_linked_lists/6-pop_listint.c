#include "lists.h"

/**
 * pop_listint - function to delete the list from the head pointer
 * @head: pointer to the linked list header to be deleted
 *
 * Return: num of elements that was deleted,
 * or 0 if nothing was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
