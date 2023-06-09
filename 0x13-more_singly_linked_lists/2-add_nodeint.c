#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to a pointer to the head of the list.
 * @n: integer value to store in the new node.
 * Return: address of the new element, or 0 if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node = malloc(sizeof(listint_t));
if (node != 0)
{
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
	return (0);
}
