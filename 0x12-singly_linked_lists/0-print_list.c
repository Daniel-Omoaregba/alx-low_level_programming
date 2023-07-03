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
	const list_t *s;
	int count;

	s = h;
	count = 0;
	if (s == NULL)
		return (count);
	while (s != NULL)
	{
		if (s -> str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", s -> len, s -> str);
		s = s -> next;
		count++;
	}
	return (count);
}
