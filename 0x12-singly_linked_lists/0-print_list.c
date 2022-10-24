#include "lists.h"
/**
 * print_list - function to print all elements of a list
 * @h: head of the list
 * Return: number of elements in the list of size_t
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("[%u] ", temp->len);
		if (temp->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", temp->len, temp->str);
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
