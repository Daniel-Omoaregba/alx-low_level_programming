#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: the pointer node
 *
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	const list_t *s;
	int len;

	len = 0;
	s = malloc(sizeof(list_t));
	if (h == NULL)
		return(len);
	s = h;
	while (s != NULL)
	{
		len++;
		s = s -> next;
	}
	return (len);
}
