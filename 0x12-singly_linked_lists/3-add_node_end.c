#include "lists.h"
/**
  * add_node_end - adds a new node at the end of a list_t list
  * @head: list name
  * @str: string to be put in the list
  * Return: the address of the new element or NULL if failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t)), *last;

	if (temp == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = temp;
	}

	return (*head);
}
