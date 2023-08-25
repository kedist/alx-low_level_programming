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
if (new == NULL)
	return (NULL);
duplicat = strdup(str);
if (duplicat == NULL)
{
	free(newnode);
	rreturn (NULL);
}
for (len = 0; str[len]; len++)
newnode->str;
newnode->len = len;
newnode->next = *head;
*head = newnode;
return (newnode);
}
