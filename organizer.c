#include "main.h"
/**
 * @format : A string
 * @functions : list of functions of format specifiers
 * @list : list of all arguments
 * Return: number of characters printed
 */
int organize(const char *format, fxns_t functions[], va_list list)
{
	int chars = 0;
	int i, j, n;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			for (j = 0; functions[j].c != NULL; j++)
			{
				if (format[i + 1] == functions[j].c[0])
				{
					n = functions[j].f(list);
					if (n == -1)
					{
						return (-1);
					}
					chars = chars + n;
					break;
				}
			}
			if (functions[j].c == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					chars += 2;
				}
				else
				{
					return (-1);
				}
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			chars++;
		}
		i++;
	}
	return (chars);
}
