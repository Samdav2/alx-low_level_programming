#include "lists.h"
/**
 * free_listint - frees  a list
 * @head: A pointer to the head
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head !=NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
