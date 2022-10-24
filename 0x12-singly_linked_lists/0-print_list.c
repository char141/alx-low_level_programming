#include "lists.h"
/**
 * print_list - function to print all elements of a list
 * @h: head of the list
 * Return: number of elements in the list of size_t
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
