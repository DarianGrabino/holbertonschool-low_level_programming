#include "main.h"

/**
 *  print_line - check the code
 *  @n: number
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		--n;
	}
	if (n <= 0)
	{
	_putchar('\n');
	}
}
