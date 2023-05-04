#include "main.h"

/**
 * Converts a binary number to an unsigned int.
 *
 * @param b A pointer to a string containing a binary number.
 *
 * @return The unsigned int value of the binary number, or 0 if there was an error.
 */
unsigned int binary_to_uint(const char *b)
{
	// Initialize variables
	int i;
	unsigned int num = 0;

	// Check if input is valid
	if (!b)
 	return 0;

	// Check if input is a valid binary number
	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] != '0' && b[i] != '1')
	return 0;
	}

	// Convert binary number to unsigned int
	for (i = 0; b[i] != '\0'; i++)

	{
	num <<= 1;
	if (b[i] == '1')
	num += 1;
	}

	return num;
}
