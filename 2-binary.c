#include "main.h"
/**
 * print_binary - converts a number from base 10 to base 2
 * @list : list of arguments
 * Return: number of chars printed
 */
/*int print_binary(char *dest, va_list list)
{
	unsigned int i = va_arg(list, unsigned int);
	int length;
	int x = 1;
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
}*/

int print_binary(va_list list)
{
	unsigned int num;
	int i, len;
	char *str;
	char *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);
	return (len);
}
