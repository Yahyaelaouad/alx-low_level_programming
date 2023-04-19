#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array 
 * @array: array
 * @size: how many elem to print
 * OWNED BY YAHYA
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == 0 || action == 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
