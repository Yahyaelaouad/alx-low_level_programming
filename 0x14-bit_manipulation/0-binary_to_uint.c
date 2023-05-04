#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @Z: pointer to a string containing a binary number
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *Z)
{
	int i;
	unsigned int num;

	num = 0;
	if (!Z)
		return (0);
	for (i = 0; Z[i] != '\0'; i++)
	{
		if (Z[i] != '0' && Z[i] != '1')
			return (0);
	}
	for (i = 0; Z[i] != '\0'; i++)
	{
		num <<= 1;
		if (Z[i] == '1')
			num += 1;
	}
	return (num);
}
