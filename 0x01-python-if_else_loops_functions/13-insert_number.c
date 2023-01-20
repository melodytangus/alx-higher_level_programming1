#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 *_strlen - calculates the length of a string
 *@str: pointer to the string
 *
 *Return: the length of the string
 */
unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 *add_node - adds a new node to beginning of a linked list
 *@head: the head pointer of the linked list
 *@str: the string to add to the node field called str
 *
 *Return: the address of the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
