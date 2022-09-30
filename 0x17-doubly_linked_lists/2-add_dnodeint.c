#include "lists.h"
/**
  * add_dnodeint - adds a new node at the beginning of a list
  * @head: list to be appended
  * @n: new element to be included
  * Return: address of new element or NULL if failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	if (head == NULL)
	{
		head = temp;
		return (head);
	}
	head->prev = temp;
	temp->next = (*head);
	(*head) = temp;

	return (*head);
}
