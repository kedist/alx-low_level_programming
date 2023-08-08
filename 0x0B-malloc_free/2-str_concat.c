#include <stdlib.h>
#include "main.h"
/**
* str_concat - does my stuff
* @s1: first string
* @s2: secnd string
* Description:does my stuff explained
* Return:Always(Success);
*/

char *str_concat(char *s1, char *s2)
{
char *s3;
unsigned int s1l = 0;
unsigned int s2l = 0;
unsigned int s3l;
unsigned int i = 0;
unsigned int j = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[s1l])
s1l++;
while (s2[s2l])
s2l++;

s3l = s1l + s2l;

s3 = malloc(sizeof(char) * s3l + 1);
if (s3 == NULL)
return (NULL);

while (i < s1l)
{
s3[i] = s1[i];
i++;
}

while (i <= s3l)
{
s3[i] = s2[j];
i++;
j++;
}
return (s3);
}
