#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* struct list_S - does my stuff
* @str: string
* @len: lengt
* @next: points to hte addres of next node
* Description:does my stuff explained
* Return:Always(Success);
*/
typedef struct list_s
{
char *str;
int len;
struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void before_main() __attribute__((constructor));
#endif
