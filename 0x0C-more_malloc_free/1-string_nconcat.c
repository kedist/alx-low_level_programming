#include <stdlib.h>
#include "main.h"
/**
* string_nconcat - does my stuff
* @s1: chara first
* @s2: char second
* @n: unsigned int
* Description:does my stuff explained
* Return:Always(Success);
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *r;
unsigned int i, k, l, size;
unsigned int ni, niw;

i = 0;
k = 0;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

while (s1[i])
	i++;
while (s2[k])
	k++;
if (k > n)
	k = n;
l = i + k;
r = malloc(sizeof(char) * (l + 1));
if (r == NULL)
	return (NULL);
size = 0;
for (ni = 0; ni < i; ni++)
	r[size++] = s1[ni];

for (niw = 0; niw < k; niw++)
	r[size++] = s2[niw];

r[size] = '\0';
return (r);
}
