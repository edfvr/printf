#include "main.h"
/**
 *
 */
int rot13(va_list list)
{
	int i, j;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char t[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);
	if (str == NULL)
	{
		return (-1);
	}

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == s[j])
			{
				_putchar(t[j]);
				break;
			}
		}
		if (j == 53)
		{
			_putchar(str[i]);
		}
		i++;
	}
	return (i);
}

/**
 * print_reversed - Calls a function to reverse and print a string
 * @arg: Argument passed to the function
 * Return: The amount of characters printed
 */
int print_reversed(va_list arg)
{
	int length;
	char *str;
	char *ptr;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		return (-1);
	}
	ptr = rev_string(str);
	if (ptr == NULL)
	{
		return (-1);
	}
	for (length = 0; ptr[length] != '\0'; length++)
	{
		_putchar(ptr[length]);
	}
	free(ptr);
	return (length);
}
