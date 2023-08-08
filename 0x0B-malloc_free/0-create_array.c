#include "main.h"
#include <stdlib.h>
/**
* *create_array - does my stuff
* @size: - takea chaars
* @c: - int takes
* Description:does my stuff explained
* Return:Always(Success);
*/

char *create_array(unsigned int size, char c)
{

char  *ac;
unsigned int i;

if (size == 0)
return (NULL);

ac =  malloc(sizeof(char) * size);
if (ac == NULL)
return (NULL);

for (i = 0; i < size; i++)
ac[i] = c;

return (ac);
}
