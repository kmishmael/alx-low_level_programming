int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - sub two integers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - returns modulus
 * @a: first integer
 * @b: second integer
 * Return: result of modulus
 */
int mod(int a, int b)
{
	return (a % b);
}
