
/**
 * reverse_array - reverse an array
 * @a: int pointer
 * @n: int number
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int l = n - 1;

	while (i < l)
	{
		int temp = a[i];

		a[i] = a[l];
		a[l] = temp;
		i++;
		l--;
	}
}
