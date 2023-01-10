#include "main.h"
#include <stdlib.h>

/**
 * alloc-grind - create a matrix using malloc
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: a pointer of pointer or null
 */

int **alloc_grind(int width, int height)
{
int a, b, c, d;
int **p;
if (width <= 0 || height <= 0)
return (NULL);
else
{
p = (int **) malloc(height * sizeof(int *));
if (!p)
{
free(p);
return (NULL);
}
for (a = 0; a < height; a++)
{
p[a] = (int *) malloc(width * sizeof(int));
if (!p[a])
{
for (b = 0; b <= a; b++)
free(p[b]);
free(p);
return (NULL);
}
}
for (c = 0; c < height; c++)
{
for (d = 0; d < width; d++)
{
p[c][d] = 0;
}
}
return (p);
}
}
