# Pseudocode

## Char and String conversion specifiers
Declare a va_list

Loop thru the format string
    and if we encounter a `%` sign, check the next character.
        if next character after `%` sign is `Null` break

        if next character after `%` sign is `c`, fetch character argumen with `va_arg`, write to chaacterto stdout nd ter a char_count++

        if next character after `%` sign is `s`, fetch string argument with va_arg, loop through the string and write each character to stdout and char_count++

        if next character after `%` sign is `%`, write to stdout and char_count++
    else
        write character that `format` is pointing to stdout and char_count++
Move to nextcharacter n the tring.
Return char_count 

ntegers
Create a function to print integers
Variables
isNegative = to flag if the number is negative (0 for positive, 1 for negative)

1. Handle negative numbers
if number is negative
    print a minus sign
    set `isNegative` to 1
    negate the value of n
    charCount++

2. Handle zero
if number is zero
    print 0
    charCount++
else 
    3. Calculate the no. of digits
    number of digits in the number n is 0
    tmp = n
    while tmp > 0
        tmp = tmp / 10 to remove the last digit from the number(tmp)
        numDigits++

    4. Print from left to right
    Loop till i = 1 is less than the number of digits
        divisor = divisor * 0
   Whle divioris more than 0
1 is         divide the number by divisor to get the first digit
        prints ASCII character of digit.
        set the number to be the remainder of the division
        charCount++






