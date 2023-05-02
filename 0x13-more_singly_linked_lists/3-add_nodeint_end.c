#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 * Return: address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *cursor = *head;

	node = malloc(sizeof(listint_t));
	if (node != 0)
	{
		node->n = n;
		node->next = 0;
	}
	else
		return (0);
	if (cursor != 0)
	{
		while (cursor->next != 0)
			cursor = cursor->next;
		cursor->next = node;
	}
	else
		*head = node;
	return (node);
}
