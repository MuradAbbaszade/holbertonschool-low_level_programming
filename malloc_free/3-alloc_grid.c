#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - check the code
 * @width:a
 * @height:a
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **arr;
if (width <= 0 || height <= 0)
return (NULL);
arr = (int **)malloc(height * sizeof(int *));
if (arr == NULL)
{
free(arr);
return (NULL);
}
for (i = 0; i < height; i++)
arr[i] = (int *)malloc(width * sizeof(int));
for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
arr[i][j] = 0;
return (arr);
}
