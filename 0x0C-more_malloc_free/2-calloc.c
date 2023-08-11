#include <stdlib.h>
#include "main.h"
/**
* _calloc - does my stuff
* @nmemb: num of elements
* @size: size of array
* Description:does my stuff explained
* Return:Always(Success);
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *r;
unsigned int k;

if (size == 0 || nmemb == 0)
	return (NULL);
r = malloc(nmemb * size);
if (r == NULL)
	return (NULL);
for (k = 0; k < (nmemb * size); k++)
	r[k] = 0;

return (r);
}
