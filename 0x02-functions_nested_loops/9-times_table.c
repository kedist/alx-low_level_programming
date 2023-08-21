#include "stdio.h"
/**
* times_table  - does my stuff
* Description:does my stuff explained
* Return:Always(Success);
*/
void times_table(void)
{
	int x, y, z, u, d;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;

			if (z > 9)
			{
				u = z % 10;
				d = (z - u) / 10;

				_putchar(',');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(u + '0');
			}
	

				_putchar(z + '0');
			}
		}

		_putchar('\n');
	}
}
