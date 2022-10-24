#include "lists.h"
/**
 * list_len - prints the number of elements in a list
 * @h: the list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t nodes = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
