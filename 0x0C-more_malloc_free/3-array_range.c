#include <stdlib.h>
#include "main.h"
/**
* array_range - does my stuff
* @min: the min
* @max: the max
* Description:does my stuff explained
* Return:Always(Success);
*/

int *array_range(int min, int max)
{
int *r;
int i;
int k = 0;

if (min > max)
	return (NULL);
r = malloc(sizeof(int) * (max - min + 1));
if (r == NULL)
	return (NULL);
for (i = min; i <= max; i++)
{
	r[k] = i;
	k++;
}
return (r);
}
