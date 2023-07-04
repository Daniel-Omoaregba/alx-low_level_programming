#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to head
 * @str: string used
 *
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr_s, *s;

	ptr_s = malloc(sizeof(list_t));
	if (ptr_s == NULL)
		return (NULL);
	ptr_s->str = strdup(str);
	ptr_s->len = strlen(str);
	ptr_s->next = NULL;
	if (*head == NULL)
	{
		*head = ptr_s;
	}
	else
	{
		s = *head;
		while (s->next != NULL)
			s = s->next;
		s->next = ptr_s;
	}
	return (ptr_s);
}
