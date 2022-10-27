#include "lists.h"
/**
 * pop_listint - Deletes the head node of a list.
 *
 * @head: A pointer to the address of the head of the list
 *
 * Return: 0 or the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret;

	if (*head == NULL)
		return (0);
	temp = *head;
	ret = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (ret);
}
