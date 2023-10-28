/**
 * reverse_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i = n - 1, j=0;
int k, center;
if (n % 2 != 0)
{
center = (n + 1) / 2;
}
else
{
center = n / 2;
}
while (i >= center)
{
k = *(a + i);
*(a + i) = *(a + j);
*(a + j) = k;
j++;
i--;
}
}
