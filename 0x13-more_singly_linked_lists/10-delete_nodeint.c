#include "lists.h"
/**
 * delete_nodeint_at_index - C function thst deletes the node at index
 * @head: The head of a list
 * @index: The index of the list
 * deleted.
 *
 * Return: 1 if succeeded or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *pr, *temp;
	unsigned int a = 0;

	cur = *head;
	pr = cur;

	if ((*head) && index == 0)
	{
		*head = (*head)->next;
		free(pr);
		return (1);
	}

	while (cur)
	{
		temp = cur;

		if (a == index)
		{
			pr->next = cur->next;
			free(cur);
			return (1);
		}
		cur = cur->next;
		pr = temp;
		a++;
	}

	return (-1);
}
