#include "lists.h"
/**
 * pop_listint - C functions that delete the head of a list
 * @head: A pointer to the head
 * Return: 0 if the liked list is empty or nodes data if not
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int d;

	if (!(*head))
		return (0);

	temp = *head;
	d = temp->n;
	temp = temp->next;

	free(*head);

	*head = temp;

		return (d);
}
