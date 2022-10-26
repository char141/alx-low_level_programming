#include "lists.h"
/**
 * print_listint - Prints all the elements of a listint_t list.
 *
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *temp;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
