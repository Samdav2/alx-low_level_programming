#include "lists.h"
/**
 * free_listint - C function that free a listint_t list
 * @head: A ponter to the head of the list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
