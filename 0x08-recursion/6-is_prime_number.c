
int is_prime(int n, int i);
/**
 * is_prime_number - checks if n is a prime number
 * @n: the number to be checked
 * Return: 1 if true, otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, n - 1));
	}
}

/**
 * is_prime - checks if n a prime number
 * @n: number to be checked
 * @i: counter
 * Return: 1 if true, 0 otherwise
 */
int is_prime(int n, int i)
{
	if (i != 1)
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (is_prime(n, i - 1));
		}
	}
	else
	{
		return (1);
	}
}
