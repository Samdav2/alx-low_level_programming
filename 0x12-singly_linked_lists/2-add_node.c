#include "lists.h"
/**
 * add_node - c program that adds nodes togehter
 * @head: a double pointer to head
 * @str: a pointer to the string
 * Return: The value of the node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	if (str == NULL)
	{
		return (NULL);
	}
	
	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}

	n_node->len = strlen(str);
	n_node->next = *head;
	*head = n_node;

	return (n_node);

}
