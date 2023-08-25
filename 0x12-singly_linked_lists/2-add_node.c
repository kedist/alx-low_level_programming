#include "lists.h"
/**
* add_node - does my stuff
* @head: list head
* @str: char string
* Description:does my stuff explained
* Return:Always(Success);
*/
list_t *add_node(list_t **head, const char *str)
{
char *duplicat;
int len;
list_t *newnode;
newnode = malloc(sizeof(list_t));
if (newnode == NULL)
	return (NULL);
duplicat = strdup(str);
if (duplicat == NULL)
{
	free(newnode);
	return (NULL);
}
for (len = 0; str[len];)
len++;
newnode->len = len;
newnode->next = *head;
*head = newnode;

return (newnode);
}
