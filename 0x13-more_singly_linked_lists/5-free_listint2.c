#include "lists.h"
/**
 * free_listint2 - free the linked list
 * @head : pointer to list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == 0)
		return;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = 0;
}
