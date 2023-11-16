#include "lists.h"
/**
 * free_list - A c function that free a singly list
 * @head: A pointer to the head
 * Return: Nothing
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
