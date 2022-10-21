# 0x11. C - printf

## Description
`printf` is a C function that sends formatted output to stdout

### Prototype
`int _printf(const char *format, ...);`

`format` contains the string to be written to `stdout`

|   Specifier   |   Description   |
|  -----------  |   -----------   |
|      `c`      |    character    |
|      `s`      |     string      |
|      `%`      |    character    |
|      `d`      | decimal integer |
|      `i`      | decimal integer |
|      `b`      | binary integer |
|      `u`      | unsigned integer |
|      `o`      | octal integer |
|      `x`      | hexadecimal integer lowercase|
|      `X`      | hexadecimal integer uppercase|

## Usage
Test using:
```
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```

### Compilation
Compile using:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```

## Authors
- Edmund Sagoe [@edfvr](https://github.com/edfvr)

- Oluchi Izunobi [@Luchy4real](https://github.com/Luchy4real)
