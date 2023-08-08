#include <stdlib.h>
#include "main.h"
/**
* free_grid - does my stuff
* @grid: gtid
* @height: height fi a
* Description:does my stuff explained
* Return:Always(Success);
*/

void free_grid(int **grid, int height)
{
int r = 0;

while (r < height)
{
free(grid[r]);
r++;
}
free(grid);
}
