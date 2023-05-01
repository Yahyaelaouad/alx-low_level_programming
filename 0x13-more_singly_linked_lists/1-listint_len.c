#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nbr = 0;

	while (h)
	{
		nbr++;
		h = h->next;
	}

	return (nbr);
}
