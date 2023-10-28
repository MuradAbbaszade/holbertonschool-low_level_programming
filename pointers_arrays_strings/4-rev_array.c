/**
 * reverse_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i,j;
for (i = n - 1, j = n - 1; i < n / 2; i++, j--)
{
int k = a[i];
a[i] = a[j];
a[j] = k;
}
}
