#include "main.h"
#include <stdlib.h>
/**
* main  - does my stuff
* @b -int passed allocated
* Description:does my stuff explained
* Return:Always(Success);
*/

void *malloc_checked(unsigned int b)
{
char *r;

r = malloc(b);
if (r == NULL)
exit(0);

return (r);
}
