#include "lists.h"
/**
  * add_nodeint - adds a node at the beginning of a listint_t list
  * @head: pointer to the list
  * @n: new data to be inputed
  * Return: address of new element
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
