#include "lists.h"
/**
 * add_node - returns the number of elements in a linked list_ list
 * @head: the pointer to
 * @str: the node
 *
 * Return: the number of elements in a linked list_t list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr_s;

	ptr_s = malloc(sizeof(list_t));
	if (ptr_s == NULL)
		return (NULL);
	ptr_s->str = strdup(str);
	ptr_s->len = strlen(str);
	ptr_s->next = *head;
	*head = ptr_s;
	return (ptr_s);
}
