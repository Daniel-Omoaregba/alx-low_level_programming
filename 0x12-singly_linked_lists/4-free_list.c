#include "lists.h"
/**
 * free_list - frees a list-t list
 * @head: points to head
 */
void free_list(list_t *head)
{
	list_t *ptr_s, *s;

	ptr_s = head;
	while (ptr_s != 0)
	{
		s = ptr_s->next;
		free(ptr_s->str);
		free(ptr_s);
		ptr_s = s;
	}
}
