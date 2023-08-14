#include <stdlib.h>
#include "dog.h"

/**
* free_dog - does my stuff
* @d: t dog
* Description:does my stuff explained
* Return:Always(Success);
*/

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
