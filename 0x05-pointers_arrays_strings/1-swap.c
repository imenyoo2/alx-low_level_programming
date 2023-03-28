
/**
 * swap_int - swaps the value of a and b
 * @a: the first number
 * @b: the second number
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
