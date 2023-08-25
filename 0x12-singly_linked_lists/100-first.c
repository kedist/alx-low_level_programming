#include "lists.h"
#include <stdio.h>
/**
* before_main - does my stuff
* Description:does my stuff explained
* Return:Always(Success);
*/
void before_main(void) __attribute__((constructor));
void before_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
/**
* main - does my stuff
* Description:does my stuff explained
* Return:Always(Success);
*/
