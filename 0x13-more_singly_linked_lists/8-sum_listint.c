#include "lists.h"
/**
 * sum_listint - C functions that returns the sum of all data
 * @head: The head of a list
 * Return: The sum of all the data
 */
int sum_listint(listint_t *head)
{
	int a = 0;

	if (!head)
		return (0);

	while (head)
	{
		a += head->n;
		head = head->next;
	}

	return (a);
}
