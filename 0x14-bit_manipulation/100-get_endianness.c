#include <stdio.h>

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 * OWNED BY YAHYA
 */
int get_endianness(void)
{
	int num = 1;
	char *byte_pointer = (char *)&num;
	if (*byte_pointer == 1)
	return 1;
	else
	return 0;
}
