
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - calculates the natural square root of n
 * @n: integer
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}


/**
 * _sqrt - evaluate the square root of n
 * @n: integer
 * @i: counter
 * Return: int
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}
