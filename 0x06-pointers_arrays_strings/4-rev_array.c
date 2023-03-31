/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array of integers
 * @n: the number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	int mid;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		mid = a[i];
		a[i] = a[j];
		a[j] = mid;
		j--;
	}
}
