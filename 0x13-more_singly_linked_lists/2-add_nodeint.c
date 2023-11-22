#include "lists.h"
/**
 * add_nodeint - C functions that adds a new node at the beginning of a listint
 * @head: A pointer to the pointer to the head of the list
 * @n: The value to be added to the new node of the list
 * Return: The address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->n = n;
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
