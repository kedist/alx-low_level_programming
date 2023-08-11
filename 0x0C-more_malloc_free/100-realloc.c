#include <stdlib.h>
#include "main.h"
/**
* realloc  - does my stuff
* @ptr: pointer
* @old_size: old sixe
* @new_size: new size
* Description:does my stuff explained
* Return:Always(Success);
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *r;
char *old = ptr;
unsigned int i;

if (old_size == new_size)
	return (ptr);
if (ptr == NULL)
{
	r = malloc(new_size);
	return (r);

}
if (new_size == 0)
{
	free(ptr);
	return (NULL);
}
r = malloc(new_size);

if (r == NULL)
	return (NULL);
for (i = 0; i < old_size; i++)
r[i] = old[i];

free(old);
return (r);
}
