#include "lists.h"


/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p2, *prev;

	if (head == NULL || head->next == NULL)
		return (NULL);

	p2 =  head->next;
	prev = (head->next)->next;

	while (prev)
	{
		if (p2 == prev)
		{
			p2 = prev;
			while (p2 != prev)
			{
				p2 = p2->next;
				prev = prev->next;
			}
			return (p2);
		}
	p2 = p2->next;
	prev = (prev->next)->next;
	}
	return (NULL);
}
