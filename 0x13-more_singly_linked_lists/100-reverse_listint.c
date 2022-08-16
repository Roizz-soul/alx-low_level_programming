#include "lists.h"
/**
  * reverse_listint - reverses a listint_t linked list
  * @head: pointer to the list
  * Return: pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp1;

	if (head == NULL || *head == NULL)
		return (NULL);
	temp1 = NULL;
	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		(*head)->next = temp1;
		temp1 = *head;
		*head = temp;
	}
	(*head)->next = temp1;
	return (*head);
}
