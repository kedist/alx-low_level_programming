#include <stdlib.h>
#include "main.h"
/**
* _strdup - does my stuff
* @str: pointer to char
* Description:does my stuff explained
* Return:Always(Success);
*/

char *_strdup(char *str)
{
char *ne;
unsigned int i = 0;
unsigned int j = 0;

if  (str == NULL)
return (NULL);

while (str[i])
i++;

ne = malloc(sizeof(char) * (i + 1));
if (ne == NULL)
return (NULL);

while (str[j])
{
ne[j] = str[j];
	j++;
}
ne[j + 1] = 0;
return (ne);
}
