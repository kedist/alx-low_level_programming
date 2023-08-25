#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
* add_node - does my stuff
* @head: list head
* @str: char string
* Description:does my stuff explained
* Return:Always(Success);
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;

newnode = malloc(sizeof(list_t));
if (newnode == NULL)
	return (NULL);
newnode->str = strdup(str);
if (newnode->str == NULL)
{
	free(newnode);
	return (NULL);
}
newnode->len = strlen(str);
newnode->next = *head;
*head = newnode;

return (*head);
}
