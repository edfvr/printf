#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str : pointer to str
 */
void _puts(char *str)
{
		int i;

		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
}

/**
 * _strlen - returns the length of a string.
 * @s: string pointer
 * Return: the string's length
 */
int _strlen(char *s)
{
		int stringLenth = 0;

		while (*s++)
		{
			stringLenth++;
		}
		return (stringLenth);
}

/**
 * rev_string - reverses a string
 * @s : pointer to s
 */
void *rev_string(char *s)
{
	char c;
	int i, x = 0, y = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	y = x - 1;

	for (i = 0; i < x / 2; i++)
	{
		c = s[i];
		s[i] = s[y];
		s[y--] = c;
	}
}

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest : memory area
 * @src : memory area bytes are copied from
 * @n : no. of characters copied from src
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * base_len - calculates the length for an octal
 * @n : the number
 * @base : base being calculated
 * Return: An integer representing the
 * 	length of a number
 */
unsigned int base_len(unsigned int n, int base)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		n = n / base;
	}
	return (i);
}

/**
 * hex_check - 
 * @n : number to be changed
 * @c : character which determines
 * 	the hex function to use
 * Return: the ASCII value for character
 */
int hex_check(int n, char c)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	n = n - 10;
	
	if (c == 'x')
	{
		return (hex[n]);
	}
	else
	{
		return (Hex[n]);
	}
	return (0);
}
