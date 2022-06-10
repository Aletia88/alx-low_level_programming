#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 through 9).
 * @c: An input integer
 * Return: 1 if c is a digit otherwise 0.
 */
int _isdigit(int c)
{
char i = '0';
int is_digit = 0;
for (; i <= '9'; i++)
{
if (i == c)
{
is_digit = 1;
break;
}
}
return (is_digit);
}
