#include "main.h"

/**
 * unsigned_int - prints unsigned integers
 * @list : list of arguments
 * Return : number of unsigned numbers
 */
int unsigned_int(va_list list)
{
	unsigned int n;

	n = va_arg(list, unsigned int);

	if (n == 0)
	{
		return (print_unsigned_number(n));
	}

	if (n < 1)
	{
		return (-1);
	}
	return (print_unsigned_number(n));
}

/**
 * print_octal - prints in base 8
 * @list : list of arguments
 * Return: number of characters
 */
int print_octal(va_list list)
{
	unsigned int n;
	int length;
	char *oct;
	char *str_rev;

	n = va_arg(list, unsigned int);

	if (n == 0)
	{
		return (_putchar('0'));
	}
	if (n < 1)
	{
		return (-1);
	}
	length = base_len(n, 8);

	oct = malloc(sizeof(char) * length + 1);
	if (oct == NULL)
	{
		return (-1);
	}
	for (length = 0; n > 0; length++)
	{
		oct[length] = (n % 8) + 48;
		n = n / 8;
	}
	oct[length] = '\0';
	str_rev = rev_string(oct);
	if (str_rev == NULL)
	{
		return (-1);
	}
	_putchar(str_rev);
	free(oct);
	free(str_rev);
	return (length);
}

/**
 * print_hexadecimal - prints in base 16 lowercase
 * @list : list of arguments
 * Return: number of characters printed
 */
int print_hexadecimal(va_list list)
{
	unsigned int n;
	int length;
	int rem_n;
	char *hex_rep;
	char* rev_hex;

	n = va_arg(list, unsigned int);

	if (n == 0)
	{
		return (_putchar('0'));
	}
	if (n < 1)
	{
		return (-1);
	}

	length = base_len(n, 16);
	hex_rep = malloc(sizeof(char) * length + 1);
	if (hex_rep == NULL)
	{
		return (-1);
	}
	for (length = 0; n > 0; length++)
	{
		rem_n = n % 16;
		if (rem_n > 9)
		{
			rem_n = hex_check(rem_n, 'x');
			hex_rep[length] = rem_n;
		}
		else
		{
			hex_rep[length] = rem_n + 48;
		}
		n = n / 16;
	}
	hex_rep[length] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
	{
		return (-1);
	}
	_putchar(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (length);
}

/**
 * print_HEX - prints in base 16 uppercase
 * @list : list of arguments
 * Return: number of characters printed
 */
int print_HEX(va_list list)
{
	unsigned int n;
	int length;
	int rem_n;
	char *hex_rep;
	char* rev_hex;

	n = va_arg(list, unsigned int);

	if (n == 0)
	{
		return (_putchar('0'));
	}
	if (n < 1)
	{
		return (-1);
	}

	length = base_len(n, 16);
	hex_rep = malloc(sizeof(char) * length + 1);
	if (hex_rep == NULL)
	{
		return (-1);
	}
	for (length = 0; n > 0; length++)
	{
		rem_n = n % 16;
		if (rem_n > 9)
		{
			rem_n = hex_check(rem_n, 'X');
			hex_rep[length] = rem_n;
		}
		else
		{
			hex_rep[length] = rem_n + 48;
		}
		n = n / 16;
	}
	hex_rep[length] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
	{
		return (-1);
	}
	_putchar(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (length);
}	
