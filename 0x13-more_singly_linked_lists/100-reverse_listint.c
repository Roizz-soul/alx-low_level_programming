#include "lists.h"
/**
  * reverse_listint - reverses a listint_t linked list
  * @head: pointer to the list
  * Return: pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp1;

	if ((*head)->next == NULL)
	{
		temp = *head;
		return (temp);
	}
	reverse_listint((*head)->next);
	temp1 = (*head)->next;
	temp1->next = *head;
	(*head)->next = NULL;
}
