#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * Owned By YAHYA
 * @head: pointer to the header
 */

void free_listint2(listint_t **head)
{
	listint_t *z;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		z = (*head)->next;
		free(*head);
		*head = z;
	}
	*head = NULL;
}
