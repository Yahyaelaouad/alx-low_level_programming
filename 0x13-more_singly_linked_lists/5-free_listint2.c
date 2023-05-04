#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to pointer to the first node of the list
 *
 * Return: void
 */

void free_listint(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
