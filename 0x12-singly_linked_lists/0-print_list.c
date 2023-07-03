#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_list - function that prints all elemments of a list_t list
* @h: points to head
*
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	const list_t *ptr_h;
	int count;

	ptr_h = h;
	count = 0;
	if (ptr_h == NULL)
		return (count);
	while (ptr_h != NULL)
	{
		if (ptr_h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr_h->len, ptr_h->str);
		ptr_h = ptr_h->next;
		count++;
	}
	return (count);
}
