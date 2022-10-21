#include "main.h"
/**
 *
 */
int print_binary(char *dest, va_list list)
{
	unsigned int i = va_arg(list, unsigned int);
	int length, x = 1;
	unsigned int tmp;
	tmp = i;

	while (tmp > 1)
	{
		x = x * 2;
		tmp = tmp / 2;
	}

	tmp = i;
	while (x > 0)
	{
		dest[length] = ('0' + tmp / x);
		tmp = tmp % x;
		x = x / 2;
		length += 1;
	}
	return (length);
}
