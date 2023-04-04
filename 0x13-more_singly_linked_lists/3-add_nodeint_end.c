#include "lists.h"
/**
 * add_nodeint_end - C functions that adds new node at the end of a listint
 * @head: Pointer to the head address of a list
 * @n: The integer for new node
 * Return: Address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new = NULL;

	new = (listint_t *)malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!(*head))
		*head = new;

	else
	{
		temp = *head;

		while (temp->next != NULL)

			temp = temp->next;


		temp->next = new;
	}
	return (new);
}
