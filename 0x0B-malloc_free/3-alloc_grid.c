#include <stdlib.h>
#include "main.h"
/**
* alloc_grid - does my stuff
* @width: width of the array
* @height: height of the array
* Description:does my stuff explained
* Return:Always(Success);
*/

int **alloc_grid(int width, int height)
{
int **p;
int i, j, r;

if (width <= 0 || height <= 0)
return (NULL);

p = malloc(sizeof(int *) * height);
if (p == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
p[i] = malloc(sizeof(int) * width);
if (p[i] == NULL)
{
while (i >= 0)
{
free(p[i]);
i--;
}
free(p);
return (NULL);
}
}

for (j = 0; j < height; j++)
{
for (r = 0; r < width; r++)
p[j][r] = 0;
}
return (p);
}
