#include "lists.h"
/**
 * add_nodeint - C function that adds node from the begining of a listint_t
 * @head: A point that point to the address of the head of the list
 * @n: The number of node
 * Return: Address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = (listint_t *)malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
