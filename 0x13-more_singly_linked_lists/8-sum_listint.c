#include "lists.h"

/**
 * sum_listint - function to calculate the sum of all the data in a list
 * @head: the list’s first node
 *
 * Return: the sum of the data in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
