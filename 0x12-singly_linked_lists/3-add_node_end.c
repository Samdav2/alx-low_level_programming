#inclue "lists.h"
/**
 * add_node_end - A function that add node to the end
 * @head: the head of the node
 * @str: pointer to the string in the list
 * Return: the pointer list
 */
list_t *add_node_end(list_t **head, const char *str)
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
	if (n_node-> == NULL)
	{
		free(n_node);
		return (NULL);
	}

	n_node->len = strlen(str);
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
	}

	else
	{
		list_t *current = *head;
		while (current->next !=NULL)
		{
			current = current->next;
		}

		current->next = n_node;
	}

	return (n_node);
}
