#include "main.h"
/**
 * integers - 
 *
 *
 *
 */
int print_int(va_list argmts)
{
	int i, length = 0, x = 1;
	unsigned int tmp;

	i = va_arg(argmts, int);
	if (i < 0)
	{
		length = length + _putchar('-');
		tmp = i * -1;
	}
	else
	{
		tmp = i;
	}

	while (tmp > 9)
	{
		x = x * 10;
		tmp = tmp / 10;
	}

	tmp = i;
	while (x > 0)
	{
		length = length + _putchar('0' + tmp / x);
		tmp = tmp % x;
		x = x / 10;
	}
	return (length);
}
