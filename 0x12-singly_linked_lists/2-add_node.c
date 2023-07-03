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
	list_t *s;

	s = malloc(sizeof(list_t));
	if (s == NULL)
		return (NULL);
	s -> str = strdup(str);
	s -> len = strlen(str);
	s -> next = *head;
	*head = s;
	return (s);
}
