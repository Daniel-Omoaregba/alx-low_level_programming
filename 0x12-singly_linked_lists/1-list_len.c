#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: the pointer node
 *
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr_h;
	int len;

	len = 0;
	ptr_h = malloc(sizeof(list_t));
	if (ptr_h == NULL)
		return (len);
	ptr_h = h;
	while (ptr_h != NULL)
	{
		len++;
		ptr_h = ptr_h->next;
	}
	return (len);
}
