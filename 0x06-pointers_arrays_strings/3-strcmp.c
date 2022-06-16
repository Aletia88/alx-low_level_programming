#include "main.h"
/**
 * _strcmp - a function that compare two strings
 * @s1: an input char
 * @s2: an input char
 *Return: 0
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
return (*s1 - *s2);
s1++, s2++;
}
return (*s1 - *s2);
}
