#include <stdio.h>

/**
 * main - Entry point
 * prints all the numbers of base 16 in lower case
 * Return:0
 */
int main(void)
int i , j;
{
for (i = 0; i < 10; i++)
{
putchar (i + '0');
}
for (j = 'a'; j <= 'f'; j++)
{
putchar (j);
}
putchar('\n');
return (0);
}
