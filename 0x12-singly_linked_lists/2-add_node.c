#include "lists.h"
/**
  * add_node - adds a new node at the beginning of a list_t list
  * @head: list name
  * @str: string to be put in the list
  * Return: the address of the new element or NULL if failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
