#include "lists.h"
/**
  * add_nodeint_end - adds a node at the end of a listint_t list
  * @head: pointer to the list
  * @n: new data to be inputed
  * Return: address of new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t)), *last;

	if (temp == NULL)
		return (NULL);
	temp->n = n;
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
