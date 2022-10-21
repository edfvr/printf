# 0x11. C - printf

## Description
`printf` is a C function that sends formatted output to stdout

### Prototype
`int _printf(const char *format, ...);`

`format` contains the string to be written to `stdout`
Format tags the prototype as:
`%[flags]specifier`

|   Specifier   |   Description   |
|  -----------  |   -----------   |
|      `c`      |    character    |
|      `s`      |     string      |
|      `%`      |    character    |
|      `d`      | decimal integer |
|      `i`      | decimal integer |

## Usage

### Compilation
Compile using:
s
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c


## Authors
- [Edmund Sagoe] (https://github.com/edfvr)
- [Oluchi Izunobi] (https://github.com/Luchy4real)
