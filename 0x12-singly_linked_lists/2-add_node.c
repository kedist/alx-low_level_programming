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
size_t length;
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
for (length = 0; str[length];)
length++;
newnode->len = length;
newnode->next = *head;
*head = newnode;

return (newnode);
}
