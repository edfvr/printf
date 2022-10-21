#include "main.h"

/* 
 * print_number - 
 */
int print_number(va_list argmts)
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

/**
 * print_unsigned_num -
 * @n : unsigned integer
 * Return: number of
 */
int print_unsigned_number(unsigned int n)
{
	unsigned int i;
	int x = 1;
	int length = 0;

	i = n;

	while (i < 9)
	{
		x = x * 10;
		i = i / 10;
	}

	while (x != 0)
	{
		length = length + _putchar('0' + i / x);
		i = i % x;
		x = x / 10;
	}

	return (length);
}
