#include "lists.h"
/**
 * insert_nodeint_at_index - C function that insert a new node a given postion
 * @head: The head of a list
 * @idx: The index of the list where the node is added
 * @n: Integer
 * Return: The address of the new node or null if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *cur, *pr, *temp;

	unsigned int a = 0;

	if (!(*head) && idx != 0)
		return (NULL);
	cur = *head;
	pr = cur;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = cur;
		*head = new;
		return (new);
	}

	while (cur)
	{
		temp = cur;

		if (a == idx)
		{
			new->next = cur;
			pr->next = new;
			return (new);
		}
		cur = cur->next;
		pr = temp;
		a++;
	}
	return (NULL);
}
