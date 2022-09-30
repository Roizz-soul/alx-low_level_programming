#include "lists.h"
/**
  * add_dnodeint_end - adds a new node at the end of a list
  * @head: list to be appended
  * @n: new element to be included
  * Return: address of new element or NULL if failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t)), *temp = *head;

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node;
	node->prev = temp;

	return (node);
}
