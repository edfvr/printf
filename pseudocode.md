# Pseudocode

## Char and String conversion specifiers
Declare a va_list

Loop thru the format string
    and if we encounter a `%` sign, check the next character.
        if next character after `%` sign is `Null` break

        if next character after `%` sign is `c`, fetch character argumen with `va_arg`, writ to chaacterto stdout nd ter acharCount++

        if next character after `%` sign is `s`, fetch string argument with va_arg, loop through the string and write each character to stdout and charCount++

        if next character after `%` sign is `%`, write to stdout and charCount++
    else
        write character that `format` is pointing to stdout and charCount++
Move to nextcharacter n the tring.
Return charCount 
