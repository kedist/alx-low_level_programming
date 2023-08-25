#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
* add_node_end - does my stuff
* @head: gkgl
* @str: fkyfuk
* Description:does my stuff explained
* Return:Always(Success);
*/
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *newlist;
	list_t *culist;

if (str != NULL)
newlist = malloc(sizeof(list_t));

if (newlist == NULL)
	return (NULL);

newlist->str = strdup(str);
newlist->len = strlen(str);
newlist->next = NULL;
if (*head == NULL)
{
*head = newlist;
return (newlist);
}
else
{
culist = *head;
while (culist->next)
	culist = culist->next;

culist->next = newlist;
return (newlist);
}
}
