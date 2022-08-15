#include "lists.h"
/**
  * get_nodeint_at_index - returns the nth node of a listint_t list
  * @head: pointer to list
  * @index: position of node in link
  * Return: nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;

	return (temp);
}
