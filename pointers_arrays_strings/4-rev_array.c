/**
 * reverse_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int k[];
int i;
for (i = 0; i < n; i++)
{
k[i] = a[n - i - 1];
}
for (i = 0; i < n; i++)
{
a[i] = k[i];
}
}
