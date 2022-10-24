#include <lists.h>
/**
 * free_list - frees all list elements
 * head: pointer to head element of list
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp)
	{
		if (temp->str)
			free(temp);
		temp = temp->next;
	}
}
