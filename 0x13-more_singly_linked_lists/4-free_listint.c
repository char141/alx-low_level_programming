#include "lists.h"
/**
 * free_listint - Frees a listint_t list.
 *
 * @head: A pointer to the head of the listint_t list to be freed.
 *
 * Return: always void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
