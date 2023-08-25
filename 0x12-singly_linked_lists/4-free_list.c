#include "lists.h"
/**
* free_list - does my stuff
* @head - end of file
* Description:does my stuff explained
* Return:Always(Success);
*/
void free_list(list_t *head)
{
list_t *fnode;
{
while (head != NULL)
fnode = head;
head = head->next;
free(fnode->str);
free(fnode);
}
}
