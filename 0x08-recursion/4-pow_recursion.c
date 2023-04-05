
/**
 * _pow_recursion - calculates the value of x^y
 * @x: integer
 * @y: the power component
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
