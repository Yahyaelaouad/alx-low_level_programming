#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: string to be printed between strings.
 * @n: number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 * OWNED BY YAHYA
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == 0)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != 0)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
