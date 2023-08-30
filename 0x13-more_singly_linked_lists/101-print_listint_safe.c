#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node_temp = NULL;
	const listint_t *l_n = NULL;
	size_t count = 0;
	size_t new_n;

	node_temp = head;
	while (node_temp)
	{
		printf("[%p] %d\n", (void *)node_temp, node_temp->n);
		count++;
		node_temp = node_temp->next;
		l_n = head;
		new_n = 0;
		while (new_n < count)
		{
			if (node_temp == l_n)
			{
				printf("-> [%p] %d\n", (void *)node_temp, node_temp->n);
				return (count);
			}
			l_n = l_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
