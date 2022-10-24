#include "lists.h"
/**
 * add_node - adds a node at the begining of the list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: string to add as node
 * Return: pointer to new head of list, NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int len = 0;

	temp = *head;
	*head = malloc(sizeof(list_t));
	if (!*head)
		return (NULL);
	while (str[len])
		len++;
	(*head)->len = len;
	if (str)
	{
		(*head)->str = strdup(str);
		if (!(*head)->str)
		{
			free(*head);
			return (NULL);
		}
	}
	else
		(*head)->str = NULL;
	(*head)->next = temp;
	return (*head);
}
