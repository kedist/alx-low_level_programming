#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main  - does my stuff
* Description:does my stuff explained
* Return:Always(Success);
*/
int main(void)
{
	int n, ldig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldig = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ldig);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ldig);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldig);
	}

	return (0);
}
