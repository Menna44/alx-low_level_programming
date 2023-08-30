#include "lists.h"

/**
 * find_listint_loop - function to loop in a linked list
 * @head: head of the wanted linked list
 *
 * Return: address of the wanted node 
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *right = head;
	listint_t *left = head;

	if (!head)
		return (NULL);

	while (right && left && left->next)
	{
		left = left->next->next;
		right = right->next;
		if (left == right)
		{
			right = head;
			while (right != left)
			{
				right = right->next;
				left = left->next;
			}
			return (left);
		}
	}

	return (NULL);
}
