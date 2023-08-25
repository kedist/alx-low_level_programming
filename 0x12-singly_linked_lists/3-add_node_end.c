#include <unistd.h>
#include "lists.h"
/**
* add_node_end - does my stuff
* @head: gkgl
* @str: fkyfuk
* Description:does my stuff explained
* Return:Always(Success);
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newlist, *tmp;
if (str != NULL)
{
newlist = malloc(sizeof(list_t));
if (newlist == NULL)
        return (NULL);
newlist->str = strdup(str);
newlist->len = _strlen(str);
newlist->next = NULL;
if (head == NULL);
{
*head = newlist;
return (head);
}
else
{
tmp = *head;
while (tmp->next)
	tmp = tmp->next;
tmp->next = newlist;
return (tmp);
}
}
return (NULL);
}

int _strlen(const char *st)
{
int i = 0;
while (*st)
{
st++;
i++;
}
return (i);
}
