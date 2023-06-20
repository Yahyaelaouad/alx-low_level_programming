/**
 * add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference between a and b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two integers
 * @a: dividend
 * @b: divisor
 *
 * Return: quotient of a divided by b
 */
int div(int a, int b)
{
	if (b == 0)
		return (0);

	return (a / b);
}

/**
 * mod - calculates the modulus of two integers
 * @a: dividend
 * @b: divisor
 *
 * Return: remainder of a divided by b
 */
int mod(int a, int b)
{
	if (b == 0)
		return (0);

	return (a % b);
}
